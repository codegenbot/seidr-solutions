import math


def rounded_avg(n, m):
    if n > m:
        return "-1"
    total = sum(range(n, m + 1))
    avg = math.ceil(total / (m - n + 1))
    return bin(avg).replace("0b", "")