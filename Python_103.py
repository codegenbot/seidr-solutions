def rounded_avg(n, m):
    n = float(n)
    m = float(m)
    avg = (n + m) / 2
    return bin(int(round(avg)))[2:].zfill(4)