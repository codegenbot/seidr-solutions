def rounded_avg(n, m):
    n = int(float(n))
    m = int(float(m))
    avg = (n + m) / 2
    return bin(int(round(avg)))[2:].zfill(4)