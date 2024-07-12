def fibfib(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        total_sum = 0
        a, b = 0, 1
        while b <= n:
            total_sum += a if a % 2 == 0 else 0
            a, b = b, a+b
        return total_sum