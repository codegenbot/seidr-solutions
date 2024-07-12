```
def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        for _ in range(2, n+1):  
            a, b = b, a+b
            total_sum += a
        return total_sum