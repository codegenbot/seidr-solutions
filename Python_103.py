def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    
    bin_str = bin(avg)[2:].zfill(8)
    
    return "0b" + bin_str


print(rounded_avg(5, 3))