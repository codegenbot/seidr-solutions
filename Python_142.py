def sum_squares(lst):
    total = 0
    for i in lst:
        if i % 12 == 0:
            total += i ** 3
        elif i % 4 == 0 and i % 3 != 0:
            total += i ** 2
        else:
            total += i
    return total