```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    binary = bin(avg)
    return binary[2:]