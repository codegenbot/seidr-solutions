def rounded_avg(n, m):
    avg = (float(n) + float(m)) / 2.0
    return format(int(round(avg)), "b").zfill(9)