def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m + 1) / 2.0
    return "0b" + bin(int(round(avg)))[2:]