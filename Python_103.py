```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    rounded_avg = round(avg)
    binary_avg = bin(rounded_avg)[2:]
    return "0b" + binary_avg.zfill(len(binary_avg))