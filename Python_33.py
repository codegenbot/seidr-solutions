```
def sort_third(l: list):
    sorted_l = [(x, i) for i, x in enumerate(sorted(l))]
    l1 = [x for _, i in enumerate(sorted_l) if i % 3 == 0]
    l2 = [x for _, i in enumerate(sorted_l) if i % 3 == 1]
    l3 = [x for _, i in enumerate(sorted_l) if i % 3 == 2]

    return [x for _, x in sorted((x, i) for i, x in zip(l1 + l2 + list(reversed(l3)), range(len(l1) + len(l2) + len(l3))))]