def rounded_avg(n, m):
    n = int(float(n))
    m = int(float(m))
    avg = round((n + m) / 2)
    return bin(int(str(avg), 10))[2:]