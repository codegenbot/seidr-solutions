def sort_third(l: list):
    third_divisible = [x for x in l if x % 3 == 0]
    return sorted([i if i % 3 != 0 else min(third_divisible) for i in l])