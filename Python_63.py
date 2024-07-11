phi = (1 + 5**0.5) / 2

def fibfib(n: int):
    a, b = 0, 1
    result = []
    for _ in range(n):
        result.append(b)
        a, b = b, a + b
    return result