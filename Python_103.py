def rounded_avg(n, m):
    if n > m:
        return -1
    return bin((n + m) // 2).zfill(((n + m) // 2) + 1)