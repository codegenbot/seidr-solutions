def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 1  
        while b < n: 
            total_sum += b
            a, b = b, a + b
        return total_sum