```
def fibfib(n: int):
    if n <= 1:
        return a
    a, b = 0, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b if n > 1 else a