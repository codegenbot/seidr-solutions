def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int):
            total_sum += num**2
        else:
            total_sum += num ** (len(str(num)))
    return total_sum