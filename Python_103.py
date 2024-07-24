def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2  
    if (avg * 2) == (n + m):  
        avg += 1
    return bin(avg)[2:]