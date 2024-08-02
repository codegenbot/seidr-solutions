def sum_squares(lst):
    return sum(
        (
            i**i
            if (index := i) % 3 == 0 and index % 4 != 0
            else i ** (i + 1) if (index := i) % 4 == 0 and (index := i) % 3 != 0 else i
        )
        for i in lst
    )