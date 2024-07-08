def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for x in l[:i].copy() + l[i + 1:].copy() if x % 3 == 0])[-1]
        for i, val in enumerate(l)
    ]