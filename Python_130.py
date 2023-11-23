def tri(n):
    result = [3]
    a, b, c = 1, 3, 2
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(1 + i // 2)
        else:
            result.append(a + b + c)
            a, b, c = b, c, a + b + c
    return result