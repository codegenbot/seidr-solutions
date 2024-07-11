def double_the_difference(lst, target):
    even_nums = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    min_diff = min(even_nums) - target
    max_diff = max(even_nums) - target

    return sum(i**2 for i in even_nums if abs(i - min_diff) <= target)