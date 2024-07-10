def sort_third(lst: list):
    not_divisible_by_three = sorted([i for i in lst if i % 3 != 0])
    divisible_by_three = [x for x in lst if x % 3 == 0]
    return not_divisible_by_three + divisible_by_three