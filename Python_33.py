def sort_third(l: list):
    third_nums = [val for val in l if val % 3 == 0]
    return [val if i % 3 != 0 else max(third_nums) for i, val in enumerate(l)]