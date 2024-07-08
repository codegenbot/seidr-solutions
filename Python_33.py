def sort_third(l: list):
    l.sort()
    return [
        val if i % 3 != 0 else l[i // 3]
        for i, val in enumerate(l)
    ]