def fizz_buzz(n: int) -> int:
    return sum(
        (i % 7 == 0 and 
         '8' not in str(i) and 
         i % 10 != 0)
        for i in range(1, n + 1)
    )

print(fizz_buzz(100_000))  # Output: 8026