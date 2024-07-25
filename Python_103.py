def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    bin_avg = bin(int(round(avg)))[2:].zfill(8)
    return "0b" + bin_avg