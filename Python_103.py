```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    return bin(int(str(avg), 2)).replace("0b", "")