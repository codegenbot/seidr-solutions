def sort_even(l: list):
    l.sort(key=lambda x: (x % 2, x))
    return [x for i, x in enumerate(l) if i % 2 != 0] + l[:][
        l.index(min(x for x in l if x % 2 == 0)) : :
    ]