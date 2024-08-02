def sum_squares(lst):
    return sum(
        i**i if i % 3 == 0 and i % 4 != 0 else i ** (i + 1) if i % 4 == 0 and i % 3 != 0 else i
        for i in lst
    )