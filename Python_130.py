def tri(n):
    result = [0]
    a, b, c = 1, 2, 3
    i = 0
    while i < n - 1:
        result.append(c)
        a, b, c = b, c, a + b + c
        i += 1
    return result