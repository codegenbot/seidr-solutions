def fib4(n):
    if n <= 2:
        return 0
    elif n == 3:
        return 2
    else:
        return fib4(n-1) + fib4(n-2)