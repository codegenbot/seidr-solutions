import math


def rounded_avg(n, m):
    if n > m:
        return -1
    avg = math.ceil((m - n + 1) / 2)
    return bin(avg).replace("0b", "0" + ("0" * math.floor(math.log2(m - n + 1) + 1)))