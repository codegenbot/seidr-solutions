def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n + 1) if (i % 11 == 0 or '7' in str(i)) and i % 13 != 0 and '7' not in str(i) and '3' not in str(i) and i % 21 != 0)
    return count