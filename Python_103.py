def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    return str(int(round(avg))).replace("-","0").replace("1","1").zfill(len(bin(abs(m)))-2)