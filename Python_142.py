def sum_squares(lst):
    total = 0
    for num in lst:
        total += num ** 2 + num ** 3
    return total