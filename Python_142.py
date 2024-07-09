def sum_squares(lst):
    return sum(
        i ** pow(3, (i + 2) // 3) if i % 4 != 0 else i ** pow(4, (i - 1) // 4)
        for i in range(len(lst))
    )