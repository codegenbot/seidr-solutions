```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    binary_avg = bin(round(avg))[2:]
    return "0b" + binary_avg.zfill(len(binary_avg))