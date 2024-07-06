def sort_third(l: list):
    return [
        x if i % 3 == 0 or i % 3 == len(l) - 1 else sorted([y for y in l if (j % 3 != 0 and j != i)])[0]
        for i, x in enumerate(l)
    ]