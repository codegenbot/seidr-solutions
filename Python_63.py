```
def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        fib_values = [0, 1]
        for i in range(2, n+1):  
            fib_values.append(fib_values[i-1] + fib_values[i-2])
        return fib_values[-1]