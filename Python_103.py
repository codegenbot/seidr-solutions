def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    avg_int = int(avg + 0.5)
    return bin(avg_int)[2:]