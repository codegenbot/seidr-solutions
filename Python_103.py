def rounded_avg(n, m):
    if n > m:
        return -1
    else:
        avg = (n + m) // 2
        return format(avg, 'b')