def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    bin_str = ""
    while avg > 0:
        bin_str = str(avg % 2) + bin_str
        avg //= 2
    return "0b" + bin_str.zfill(8)