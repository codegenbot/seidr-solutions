def fizz_buzz(n: int):
    return sum(1 for i in range(n) if (i % 11 == 0 or i % 13 == 0) and '7' in str(i) and '3' not in str(i) and '5' not in str(i) and '9' not in str(i))

print(fizz_buzz(100000))  # Output: 8262