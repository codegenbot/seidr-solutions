def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total = 0  
        for _ in range(3, n + 1):
            a, b = b, a + b  
            if _ <= n: 
                total += b
        return total