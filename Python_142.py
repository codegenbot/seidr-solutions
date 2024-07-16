def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if lst[i] % 3 == 0 and lst[i] % 4 != 0:
            total_sum += lst[i] ** 2
        elif lst[i] % 4 == 0 and lst[i] % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum