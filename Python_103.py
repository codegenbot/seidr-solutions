```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    avg = int(round(avg)) % 2 == 1 and 1 or 0
    bin_avg = bin(int(str(avg).zfill(8)))
    return "0b" + bin_avg[2:]