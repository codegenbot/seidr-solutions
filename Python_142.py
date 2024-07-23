def sum_squares(lst):
    total = 0
    for i, val in enumerate(lst):
        if i % 3 == 0:
            total += val**2
        elif i % 4 == 0 and i % 3 != 0:
            total += val**3
    return total