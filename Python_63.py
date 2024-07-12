```Python
def fibfib(n: int):
    if n <= 1:
        return 0
    total_sum = 0
    a, b = 0, 1
    while True:
        total_sum += a
        if b > n:
            break
        a, b = b, a + b
    return total_sum