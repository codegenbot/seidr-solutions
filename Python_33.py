def sort_third(l: list):
    third = [i for i in l if i % 3 == 0]
    return sorted([i if i % 3 != 0 else min(third) for i in l])