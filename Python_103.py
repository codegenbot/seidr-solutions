def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    avg = round(avg)
    binary = bin(avg)[2:]
    return "0b" + str(binary).zfill(len(str(int(bin(avg)[2:]))) + 1)