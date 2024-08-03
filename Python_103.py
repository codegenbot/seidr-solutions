```
def rounded_avg(n, m):
    if n > m:
        return -1
    average = (n + m) / 2
    return format(int(round(average)), 'b')