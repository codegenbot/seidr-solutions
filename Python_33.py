def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([i for i in l if i % 3 == 0])[j]
        for j, x in enumerate(l)
    ]