def double_the_difference(lst):
    total = 0
    for num in lst[0]:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return abs(total - sum(lst[1])) // len(lst[1]) * 2