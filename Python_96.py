from math import isqrt


def count_up_to(n):
    if n < 2:
        return []
    result = [2]
    for i in range(3, n + 1, 2):
        if isqrt(i**2) == i:
            result.append(i)
    return result