def fibfib(n: int):
    a, b = 0, 1
    total_sum = 0
    seen = {0, 1}
    while b <= n:
        if b % 2 == 0:
            total_sum += b
        a, b = b, a + b
    return total_sum