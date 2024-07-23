def sort_third(l: list):
    return sorted([i for i in l if i % 3 == 0]) + [i for i in sorted([i for i in l if i % 3 != 0])]