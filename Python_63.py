Here is the modified code:

# phi = (1 + 5**0.5) / 2

def fibfib(n: int):
    if n <= 1:
        return n
    a, b = 0, 1
    for _ in range(2, n+1):
        a, b = b, a + b
    return b