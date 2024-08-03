```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (float(n) + float(m)) / 2
    return bin(int(round(avg)))[2:]