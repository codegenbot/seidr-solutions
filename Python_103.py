```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    binary = bin(round(avg))[2:]
    return "0b" + binary.zfill(len(binary))