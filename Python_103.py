def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    return format(int(round(avg)), 'b')