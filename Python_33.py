def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([j for j in l if j % 3 == 0])[-1]
        for i, x in enumerate(l)
    ]