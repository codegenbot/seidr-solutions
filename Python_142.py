def sum_squares(*args):
    total_sum = 0
    for arg in args:
        if not isinstance(arg, (int, float)):
            raise ValueError("Invalid input. Only numbers are allowed.")
        total_sum += arg ** 2
    return total_sum