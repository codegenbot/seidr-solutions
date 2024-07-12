def fibfib(n: int):
    if n <= 1:
        return 0
    total = 0
    a, b = 0, 1
    for _ in range(n+1):  
        total += b
        a, b = b, a + b 
    return total