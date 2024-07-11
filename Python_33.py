def sort_third(l: list):
    sorted_zeros = sorted([i for i in l if i % 3 == 0])
    return [i if i % 3 != 0 else min(sorted_zeros) for i in l]