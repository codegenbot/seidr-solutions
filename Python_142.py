def sum_squares(lst):
    total_sum = 0
    for i in lst:
        if isinstance(i, (int, float)) and i % 2 != 0:
            try:
                total_sum += i**2
            except TypeError:
                return "Invalid input. Please enter numeric values."
    return total_sum