def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    result = 0
    while a + b <= n:
        if a + b > n:
            break
        result += 1
        a, b = b, a + b
    return result