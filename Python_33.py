def sort_third(l: list):
    third_zero = [i for i in l if i % 3 == 0]
    third_one_or_two = sorted([x for x in l if x % 3 != 0])
    return sorted(third_zero + third_one_or_two)