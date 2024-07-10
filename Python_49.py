def modp(n: int, p: int):
    if p == 2:
        return n
    elif p == 3:
        return pow(n, (p - 1) // 2, p)
    elif (p - 1) // 2 != pow(2, (p + 1) // 4, p):
        k = (p - 1) // 2
        result = pow(n, k, p)
        for _ in range(k):
            result = pow(result, 2, p)
        return result
    else:
        k = (p - 1) // 2
        result = pow(n, k, p)
        for _ in range(k):
            result = pow(result, 2, p)
        return result