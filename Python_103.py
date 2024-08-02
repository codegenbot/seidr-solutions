```
def rounded_avg(n, m):
    if n > m:
        return "Invalid input"
    avg = (n + m) / 2
    return str(int(round(avg)))