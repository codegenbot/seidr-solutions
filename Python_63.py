def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    total_sum = 0
    while True:
        if b > n:
            break
        if b % 2 == 0:
            total_sum += b
        a, b = b, a+b
    return total_sum