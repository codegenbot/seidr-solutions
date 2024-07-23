```
def rounded_avg(n, m):
    if m < n:
        return -1
    avg = (n + m) // 2
    return bin(round(avg))[2:]