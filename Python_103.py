def rounded_avg(n, m):
    avg = round((n + m) / 2)
    return f"0b{bin(avg)[2:].zfill(8)}"