def fizz_buzz(n: int):
    count = sum(1 for i in range(11, n+1, 11) if '7' in str(i) and i % 13 != 0)
    return count