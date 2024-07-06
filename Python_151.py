def double_the_difference(lst):
    min_num = min(num for num in lst if isinstance(num, int) and num > 0)
    max_num = max(num for num in lst if isinstance(num, int) and num % 2 != 0)
    return abs(min_num - max_num) * 2