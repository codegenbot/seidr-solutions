def fizz_buzz(n: int) -> int:
    return sum(
        1
        for i in range(1, n * 2)
        if (i % 11 == 0 or i % 13 == 0) and str(7) in str(i) and i % 77 == 0
    )