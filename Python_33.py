def sort_third(l: list):
    return [
        x if i % 3 != 0 else min([y for y in l if y == x and i % 3 != 0])
        for j, x in enumerate(sorted(set(l)))
    ]