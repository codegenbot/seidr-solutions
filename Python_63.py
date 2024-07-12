def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    a, b = 0, 1
    for _ in range(2, n):  
        a, b = b, a + b
    return b