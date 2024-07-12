def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        result = [3]
        a, b, c = 1, 1, 3
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                c = 1 + _ // 2
            else:
                a, b, c = b, c, a + b + c
            result.append(c)
        return result