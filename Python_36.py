def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(n, 0, -1)
        if ((i % 7 == 0 or i % 11 == 0 or i % 13 == 0) and '7' in str(i))
        or i % 77 == 0
    )
    return count