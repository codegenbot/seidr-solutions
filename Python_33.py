def sort_third(l: list):
    return sorted([i for i in l if i % 3 == 0]) + sorted([i for i in l if i % 3 != 0])