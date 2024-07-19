def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for x in l if (i - j) % 3 != 0])[-1]
        for j, val in enumerate(l)
    ]