def rounded_avg(n, m):
    if n > m:
        return -1
    return bin(min(n, m))[2:]