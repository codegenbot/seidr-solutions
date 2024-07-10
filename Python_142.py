def sum_squares(*args):
    total_sum = 0
    for i in range(len(args)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += args[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += args[i] ** 3
    return total_sum