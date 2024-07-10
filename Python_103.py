```
def rounded_avg(n, m):
    avg = (n + m) // 2
    return format(avg, "b").zfill(32)