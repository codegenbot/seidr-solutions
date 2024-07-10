def sum_squares(lst):
    return sum(
        (
            (i // 3) * (n**2)
            if i % 3 == 0
            else ((i // 4) * n ** (1 / 3.0) if i % 12 == 0 and i % 3 != 0 else n)
        )
        for i, n in enumerate(lst)
    )