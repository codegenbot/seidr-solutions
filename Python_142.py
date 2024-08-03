def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) or isinstance(num, float):
            total_sum += num ** 2
        else:
            return "Invalid input: Please enter a list of numbers."
    return total_sum