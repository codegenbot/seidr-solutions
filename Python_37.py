def sort_even(l):
    return [
        i if j < len(l) and k < len(l) else None
        for i, (x, k) in enumerate(sorted((y, int(y / 2)) for y in l))
    ]