def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2)
    if avg == 0:
        return '0'
    return bin(avg)[2:]