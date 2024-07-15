def sum_squares(lst):
    total = sum([i**2 if i % 3 == 0 and i != 0 else i**3 for i in lst])
    return total