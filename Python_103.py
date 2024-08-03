def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    avg_str = str(bin(avg))[2:]
    return "0b" + avg_str.zfill(len(str(2 ** len(avg_str) - 1)))