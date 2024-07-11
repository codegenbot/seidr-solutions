def rounded_avg(n, m):
    avg = round((float(n) + float(m)) / 2.0)
    return bin(avg)[2:].zfill(9)