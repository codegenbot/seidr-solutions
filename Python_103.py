def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0  
    return "0b" + format(int(round(avg)), 'b').zfill(9)