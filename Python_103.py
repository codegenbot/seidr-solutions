def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return f"0b{bin(int(avg))[2:].ljust(8, '0')}"