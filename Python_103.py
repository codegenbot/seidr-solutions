def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2  
    binary = '0b' + bin(avg)[2:]
    return binary