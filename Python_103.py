def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2  
    return bin(int(round(avg)))[2:].lstrip("0") or "0"