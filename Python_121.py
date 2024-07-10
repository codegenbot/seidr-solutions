def sum_odd(lst):
    total = 0
    for num in lst:
        if num % 2 != 0:
            total += num
    if len(lst) == 0:
        return None
    else:
        return total