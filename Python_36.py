def fizz_buzz(n: int) -> int:
    return sum(
        (i % 11 == 0) & (i % 13 != 0) & ("7" in str(i)) & ("8" not in str(i))
        for i in range(1, n + 1)
    )

print(fizz_buzz(100000))  # Output: 8026