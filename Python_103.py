def rounded_avg(n, m):
    avg = round((n + m) / 2.0)
    return f"0b{bin(avg)[2:].ljust(8, '0')}"