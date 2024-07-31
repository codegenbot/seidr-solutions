def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total += num**2
        else:
            raise ValueError("The list must contain only numbers")
    return total