def sum_squares(*args):
    total_sum = 0
    for arg in args:
        if not isinstance(arg, (int, float)):
            raise ValueError("Invalid input. Only numbers are allowed.")
        try:
            total_sum += float(arg) ** 2
        except ValueError:
            raise ValueError("Invalid input. Only numbers are allowed.")
    return total_sum