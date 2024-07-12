```
def fibfib(n: int):
    if n <= 1:
        return 0
    result = 0
    a, b = 0, 1
    for _ in range(2, n+1):
        if _ <= 1:
            a, b = b, a + b
        else:
            result += b
        a, b = b, a + b
    return result