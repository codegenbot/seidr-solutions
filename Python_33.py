def sort_third(l: list):
    return sorted([i if i % 3 != 0 else min(x for x in l if x % 3 == 0) for i in l])