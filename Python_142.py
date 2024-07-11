def sum_squares(lst):
    total = sum(
        [
            (
                x**2
                if i % 3 == 0 and i % 4 != 0
                else x**3 if i % 4 == 0 and i % 3 != 0 else 0
            )
            for i, x in enumerate(lst)
        ]
    )
    return total