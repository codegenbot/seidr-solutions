import math


def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m + 1))
    avg = -(-total // (m - n + 1))
    return format(avg, 'b').zfill(math.floor(math.log2(m - n + 1)) + 1)