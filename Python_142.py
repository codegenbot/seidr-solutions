def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total += num**2
        else:
            return "Invalid input"
    return total