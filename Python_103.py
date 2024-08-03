import math

def rounded_avg(n, m):
    if n > m:
        return -1
    avg = math.floor((n + m) / 2)
    return bin(avg)[2:]