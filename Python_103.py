```
def rounded_avg(n, m):
    avg = round((float(n) + float(m)) / 2.0 + 0.5)
    return bin(int(avg))[2:]