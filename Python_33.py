def sort_third(l: list):
    return [
        x if j % 3 != 0 else sorted([y for y in l if y == x and j % 3 != 0])[0]
        for j, x in enumerate([y for y in l if j % 3 != 0])
    ]