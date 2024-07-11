def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3] 
    elif n == 2:
        return [3, 2]
    else:
        a = 3
        b = 2
        c = 1
        result = [a, b, c]
        for _ in range(3, n + 1):
            d = a + b + c
            result.append(d)
            a, b, c = b, c, d
        return result