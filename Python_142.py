def sum_squares(a, *args):
    for arg in (a,) + args:
        if not isinstance(arg, (int, float)):
            raise ValueError("Invalid input. Only numbers are allowed.")
    return sum([i ** 2 for i in (a,) + args])