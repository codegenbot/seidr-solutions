def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m+1))
    length = len(range(n, m+1))
    avg = round(total / length)
    return bin(avg)[2:] or "0"