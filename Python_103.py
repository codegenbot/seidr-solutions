def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    bin_avg = format(int(round(avg)), "b")
    return bin_avg.zfill(8)