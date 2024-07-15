def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    int_avg = int(round(avg))
    return bin(int_avg)[2:]