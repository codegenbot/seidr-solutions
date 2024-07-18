def fizz_buzz(n: int) -> int:
    count = 0
    for i in range(77, n + 1, 77):
        if (i % 11 == 0) and (i % 13 == 0) and ("7" in str(i)):
            count += 1
    return count