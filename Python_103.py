def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return f"0b{bin(int(round(avg)))[2:].ljust(8, '0')}"