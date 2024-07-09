def sum_squares(lst):
    return sum(
        x ** ((i + 1) // 3 * 2) if (i + 1) % 4 == 0 else x ** (i // 3 * 2)
        for i, x in enumerate(lst)
    )