def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    result = [3]
    a, b, c = 0, 0, 3
    for _ in range(1, n):
        if c % 2 == 0:
            c = 1 + c // 2
        else:
            c = a + b + c
            a, b = b, c
        result.append(c)
    return result