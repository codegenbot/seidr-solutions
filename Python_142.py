def sum_squares(lst):
    return sum(
        i ** ((i + 1) // 3 * 2) if (i + 1) % 4 == 0 else i ** ((i + 1) // 4 * 3)
        for i in lst
    )