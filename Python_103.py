```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = sum(range(n, m+1)) / len(range(n, m+1))
    return format(int(round(avg)), 'b')