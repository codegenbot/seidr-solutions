def fizz_buzz(n: int):
    return sum(1 for i in range(n+1) if (i % 11 == 0 or i % 13 == 0))