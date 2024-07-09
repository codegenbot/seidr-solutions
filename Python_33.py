def sort_third(l: list):
    return [
        x if j % 3 != 0 else sorted([y for y in l if y == x and (k % 3) != 0])[0]
        for k, x in enumerate(l)
        for j in range(k, len(l), 3)
    ]