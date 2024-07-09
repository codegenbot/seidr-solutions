def sum_squares(lst):
    result = 0
    for i in lst:
        result += (i ** 3 if i % 12 == 0 or i % 4 == 0 else i ** 2)
    return result