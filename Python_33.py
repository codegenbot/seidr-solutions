def sort_third(l: list):
    return [
        val if (i := l.index(val)) % 3 != 0 else min([x for x in l if (j := l.index(x)) % 3 != 0])
        for i, val in enumerate(l)
    ]