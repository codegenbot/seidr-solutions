def sum_squares(*args):
    for arg in args:
        if not isinstance(arg, (int, float)):
            raise ValueError("Invalid input. Only numbers are allowed.")
    return sum([i ** 2 for i in args])