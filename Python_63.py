def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        while True:
            total_sum += b if b <= n and b % 2 == 0 else 0
            a, b = b, a+b
            if b > n:
                break
        return total_sum