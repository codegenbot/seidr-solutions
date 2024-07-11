def sort_third(l: list):
    return [
        min([x for x, i in enumerate(l) if (i - l.index(x)) % 3 == 0])
        if i % 3 != 0
        else sorted([x for x, _ in enumerate(l) if (i - l.index(x)) % 3 != 0])[0]
        for _, i in enumerate(l)
    ]