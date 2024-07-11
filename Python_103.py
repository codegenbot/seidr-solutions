def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return format(int(round(avg)), "b").zfill(8)