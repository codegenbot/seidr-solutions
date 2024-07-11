def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, list):
            total += sum(map(lambda x: x**2, num))
        else:
            total += num**2
    return total