def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        res = [3]
        a, b, c = 0, 0, 3
        for _ in range(n):
            res.append(c)
            a, b, c = b, c, a + b + c
        return res