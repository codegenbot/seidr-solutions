def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    result = 0
    while b <= n:
        if b > n:
            break
        result += b
        a, b = b, a + b
    return result