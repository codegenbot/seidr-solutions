def sort_third(l: list):
    return [
        next((x for i, x in enumerate(l) if (i + 1) % 3 == 0), None) 
        or x
        for _, x in sorted(((i := i + 1) // 3, x) for i, x in enumerate(l))
    ]