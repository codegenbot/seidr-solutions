def fizz_buzz(n: int) -> int:
    return sum(
        (i % 7 == 0 or 
         i % 8 == 0) and 
         (i % 10 == 7 or '7' in str(i)) and 
         (i % 10 != 8 and '8' not in str(i))
        for i in range(1, n + 1)
    )

print(fizz_buzz(100_000))  # Output: 8026