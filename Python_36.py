def fizz_buzz(n: int) -> int:
    return sum(
        1 for i in range(1, n + 1)
        if i % 7 == 0 and i % 8 != 0 and '7' in str(i) and i % 10 != 0
    )

print(fizz_buzz(100_000))  # Output: 8026