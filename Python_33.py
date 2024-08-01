def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([x for j, x in enumerate(l) if (j - i) % 3 != 0 and x])[0]
        for i, val in enumerate(l)
    ]