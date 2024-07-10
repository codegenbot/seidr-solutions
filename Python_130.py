```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        a, b, c = 3, 2, 1
        result = [3, 2]
        for _ in range(2, n):
            d = a + b + c
            result.append(d)
            a, b, c = b, c, d
        return result