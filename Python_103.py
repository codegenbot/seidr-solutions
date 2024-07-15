def rounded_avg(n, m):
    if m == 0:
        return -1
    if n > m:
        return -1
    avg = (n + m) // 2
    return bin(round(avg)).replace("0b", "")