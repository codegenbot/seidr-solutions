def sum_squares(lst):
    total = 0
    for i in lst:
        if isinstance(i, int):
            total += i**2
        elif isinstance(i, str):
            total += len(i) ** 3
    return total