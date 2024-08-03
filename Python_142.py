def sum_squares(lst):
    total = 0
    for num in lst:
        if abs(num) % 3 == 0 and abs(num) % 4 != 0:
            total += num ** 2
        elif abs(num) % 4 == 0 and abs(num) % 3 != 0:
            total += num ** 3
    return total