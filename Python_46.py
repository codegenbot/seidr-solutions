def fib4(n: int):
    if n == 0:
        return 0
    if n == 1 or n == 2:  
        return 1
    a, b = 0, 1
    for _ in range(3, n + 1):  
        a, b = b, a + b
    return b