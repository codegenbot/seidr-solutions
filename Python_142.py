def sum_squares(lst):
    total = 0
    for num in lst:
        if (num % 4 == 0 and num % 6 != 0) or (num % 12 == 0):
            total += num**2
        elif num % 2 == 0 and num % 3 != 0:
            total += num**2
    return total