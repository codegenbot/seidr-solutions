def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    binary_avg = bin(avg)[2:]
    return str(binary_avg)