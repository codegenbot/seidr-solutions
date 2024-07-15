def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (i % 7 == 0 or i % 11 == 0 or i % 13 == 0) and ("7" in str(i) or "1" in str(i) or "3" in str(i))
    )
    return count