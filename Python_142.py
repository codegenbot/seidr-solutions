def sum_squares(lst):
    return sum(
        (
            x ** (4 if i % 12 == 0 else 3)
            if ((i + 1) % 3 == 0 and (i + 1) % 4 != 0)
            or ((i + 1) % 4 == 0 and (i + 1) % 3 != 0)
            else x
        )
        for i, x in enumerate(lst)
    )