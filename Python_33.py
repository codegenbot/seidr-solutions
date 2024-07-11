def sort_third(l: list):
    l_copy = l.copy()
    return [
        val if i % 3 != 0 else min(x for x in l_copy if i % 3 == 0)
        for i, val in enumerate(l)
    ]