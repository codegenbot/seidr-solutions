```
def fibfib(n: int):
    if n <= 1:
        return 1
    elif n == 2:
        return 1
    else:
        a, b = 1, 1
        fib_values = [a, b]
        for _ in range(2, n+1):
            a, b = b, a+b
            fib_values.append(b)
        return fib_values[-1]