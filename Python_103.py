def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2  
    return '0' if avg % 2 == 0 else '1'