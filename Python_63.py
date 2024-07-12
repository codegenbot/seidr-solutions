def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        seen = {0, 1}  
        while b <= n:
            if b % 2 == 0:  
                total_sum += b
            elif b > n:
                break
            a, b = b, a+b
        return total_sum