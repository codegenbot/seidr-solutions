def sort_third(l: list):
    sorted_l = sorted((x, i) for i, x in enumerate(l))
    l1 = [x for x, _ in sorted_l if _ % 3 == 0]
    l2 = [x for x, _ in sorted_l if _ % 3 == 1]
    l3 = [x for x, _ in sorted_l if _ % 3 == 2]

    return [x for _, i in sorted((i, x) for x, i in enumerate(l))][::3] + [x for _, i in sorted((i, x) for x, i in enumerate(l))[1::3]] + [x for _, i in sorted((i, x) for x, i in enumerate(l))[2::3]]