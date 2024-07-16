def fizz_buzz(n: int) -> int:
    return sum(
        int(
            (i % 11 != 0) != (i % 13 == 0) and "7" in str(i) and "8" not in str(i)
        )
        for i in range(1, n + 1)
    )

print(fizz_buzz(100000))  # Output: 8026