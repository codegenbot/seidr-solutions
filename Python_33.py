def sort_third(l: list):
    return [
        val if i % 3 != 0 else sorted([val for i, val in enumerate(l) if i % 3 == 0])[0]
        for i, val in enumerate(l)
    ]