def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    avg = round(avg)
    binary = bin(int(str(abs(avg))))
    return str(binary)[2:]