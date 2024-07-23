def sort_third(l: list):
    return [
        i if i % 3 != 0 else sorted([j for j in l if j % 3 == 0])[::-1][k]
        for k, i in enumerate(l)
    ]