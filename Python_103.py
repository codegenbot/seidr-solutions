def rounded_avg(n, m):
    if n > m:
        return "-1"
    total = sum(range(n, m + 1))
    avg = total / (m - n + 1) 
    return bin(int(round(avg)))[2:]