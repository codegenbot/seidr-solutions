```
def rounded_avg(n, m):
    avg = round((float(n) + float(m)) / 2.0)
    return ("{0:b}".format(avg)).zfill(9)