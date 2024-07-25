def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return bin(int(round(avg * 2**len(str(n+m))))) % 2).replace("0b", "")