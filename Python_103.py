```
def rounded_avg(n, m):
    if n > m:
        return "-1"
    total = sum(range(n, m + 1))
    avg = total / (m - n + 1)
    avg_int = int(avg * 2) // 2  
    avg_str = "{:b}".format(avg_int)
    return avg_str.lstrip("0")