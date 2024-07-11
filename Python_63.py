def fibonacci(n: int):
    phi = (1 + 5**0.5) / 2
    result = []
    a, b = 0, 1
    for _ in range(n):
        result.append(int(b))
        a, b = b, int(a + b * phi))
    return result