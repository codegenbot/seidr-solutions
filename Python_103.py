def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0  
    if int(avg) == avg:
        return bin(int(round(avg)))[2:]
    else:
        avg_int = int(round(avg))
        return bin(avg_int)[2:]