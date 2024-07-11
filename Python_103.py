def rounded_avg(n, m):
    n = float(n)
    m = float(m)
    avg = ((n + m) / 2.0)
    return format(int(avg), 'b').zfill(16)