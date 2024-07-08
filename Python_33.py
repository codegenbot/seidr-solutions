def sort_third(l: list):
    third_nums = [val for val in l if val % 3 == 0]
    return sorted([max(third_nums) if i % 3 == 0 else val for i, val in enumerate(l)])