```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    if avg.is_integer():
        return bin(int(avg)).lstrip("0").lstrip("-")
    else:
        return "-1"