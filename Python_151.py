def double_the_difference(lst1, lst2):
    total = 0
    for num in lst1:
        if isinstance(num, int) and num >= 0:
            total += num**2
    return abs(total - sum(lst2)) // len(lst2) * 2