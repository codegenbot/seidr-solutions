def fizz_buzz(n: int):
    count = len([i for i in range(1, n + 1) if '3' in str(i) or '5' in str(i) or i % 15 == 0])
    return count