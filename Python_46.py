
def fib4(n):
    a = 0
    b = 1
    for _ in range(0, n-1):
        a, b = b, a + b
    return b