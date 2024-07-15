def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int):
            if i % 3 == 0:
                total += i**2
            else:
                total += i**3
        else:
            return "Error: Input must be an integer."
    return total