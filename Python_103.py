def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    bin_avg = bin(avg)[2:]
    return "0b" + bin_avg.zfill(len(bin_avg))