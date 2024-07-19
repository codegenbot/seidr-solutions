def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int):
            total += i ** 2
    return total