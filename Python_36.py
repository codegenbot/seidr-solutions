def fizz_buzz(n: int):
    result = sum(1 for i in range(1, n+1) if i % 15 == 0)
    return result