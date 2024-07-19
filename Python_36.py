def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n+1) if i % 3 == 0 or '3' in str(i))
    return count