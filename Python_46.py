def fib4(n: int):
    if n <= 1:
        return n
    else:
        return fib4(n-1) + fib4(n-2)