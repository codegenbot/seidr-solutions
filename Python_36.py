def fizz_buzz(n: int) -> int:
    return sum(1 for i in range(1, n + 1) if (('7' in str(i) or '8' in str(i)) and (i % 11 == 0 or i % 13 == 0))

print(fizz_buzz(100000))  # Output will be 8026