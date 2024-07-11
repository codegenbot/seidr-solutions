def rounded_avg(n, m):
    n = int(float(n))
    m = int(float(m))
    avg = (n + m) // 2
    return bin(avg)[2:].zfill((avg.bit_length() + 7) // 8 * 8)