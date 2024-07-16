def fizz_buzz(n: int) -> int:
    return sum(1 for i in range(1, n+1) if '7' in str(i) or i % 7 == 0)