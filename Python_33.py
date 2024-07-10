def sort_third(l: list):
    third = [i for i in l if i % 3 == 0]
    rest = sorted([i for i in l if i % 3 != 0])
    return rest + third