```
def fibfib(n: int):
    if n <= 1:
        return 0
    a, b = 0, 1
    total_sum = 0
    for _ in range(n):
        total_sum += b
        a, b = b, a + b
    return total_sum