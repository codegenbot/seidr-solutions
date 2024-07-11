```
def rounded_avg(n, m):
    avg = (float(n) + float(m)) / 2.0
    return bin(round(avg))[2:].zfill(9)