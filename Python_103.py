```
def rounded_avg(n, m):
    if n >= m:
        return bin(((n + m) // 2))[2:]
    else:
        return -1