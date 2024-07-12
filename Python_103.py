def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    avg = round(avg)
    return format(avg, 'b')[2:]