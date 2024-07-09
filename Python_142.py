def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int) and (isinstance(i % 3, int) == 0 and isinstance(i % 4, int) != 0):
            total += i ** 2
        elif isinstance(i, int) and (isinstance(i % 4, int) == 0 and isinstance(i % 3, int) != 0):
            total += i ** 3
    return total