def fibfib(n: int):
    if n == 1 or n == 2:
        return 1
    a, b = 1, 1
    for _ in range(2, n+1):  
        a, b = b, a+b
    return b