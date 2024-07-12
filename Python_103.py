```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = int(((n + m) / 2))
    return bin(avg)[2:]