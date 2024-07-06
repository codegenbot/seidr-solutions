import math


def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m + 1))
    avg = (total / (m - n + 1)) + 0.5
    return bin(int(avg)).replace("0b", "0" * (math.floor(math.log2((m - n + 1))) + 1))