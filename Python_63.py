```
phi = (1 + 5**0.5) / 2

def fibfib(n: int):
    a, b = 0, 1
    for _ in range(n-1):
        a, b = b, a + b
    return int(a * phi ** (n - 1)) % 10**9 + 1