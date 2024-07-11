```
def rounded_avg(n, m):
    avg = round((n + m) / 2.0)
    return bin(avg)[2:].zfill(9)