def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if (num + 1) % 3 == 0 and (num + 1) % 4 != 0:
            total_sum += num ** 2
        elif (num + 1) % 4 == 0 and (num + 1) % 3 != 0:
            total_sum += num ** 3
    return total_sum