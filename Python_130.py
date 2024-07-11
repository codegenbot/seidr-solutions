def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    res = [3]
    a, b, c = 0, 0, 3
    for i in range(2, n + 1):
        if i % 2 == 0:
            c = 1 + i // 2
        else:
            a, b, c = b, c, a + b + c
        res.append(c)
    return res