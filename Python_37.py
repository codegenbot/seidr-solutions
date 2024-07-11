def sort_even(l: list):
    return [
        i if i % 2 != 0 else sorted([x for x in l if (l.index(x) + 1) % 2 == 0])[-1]
        for i in range(len(l))
    ]