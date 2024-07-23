def phi(p: int):
    result = p
    for i in range(2, int(p ** 0.5) + 1):
        if p % i == 0:
            while p % (i * i) == 0:
                p /= i
            result -= result // i
    if p > 1:
        result -= result // p
    return result