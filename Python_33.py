def sort_third(l: list):
    third = [i for i in l if i % 3 == 0]
    return sorted([i if i % 3 != 0 else min(third) if len(third) > 0 else i for i in l])