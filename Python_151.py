def double_the_difference(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return abs(total - sum(lst)) // len(lst) * 2