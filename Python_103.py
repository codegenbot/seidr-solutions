```
def rounded_avg(n, m):
    avg = round((float(n) + float(m)) / 2.0)
    return format(avg, 'b').zfill(9)