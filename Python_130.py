def tri(n):
    result = [0, 3]
    if n <= 1:
        return result[:n + 1]
    a, b, c = 0, 0, 3
    for i in range(2, n + 1):
        a, b, c = b, c, a + b + c
        result.append(c)
    return result