```
def fibfib(n: int):
    if n <= 1:
        return n
    fib_sequence = [0, 1]
    while fib_sequence[-1] <= n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
    return fib_sequence[-1]