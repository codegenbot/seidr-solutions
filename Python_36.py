```
def fizz_buzz(n: int):
    return sum(1 if i % 15 == 0 else 0 for i in range(1, n+1))