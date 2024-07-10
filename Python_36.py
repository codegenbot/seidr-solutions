def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n+1, 1) if '7' in str(i) and i % 13 == 0)
    return count