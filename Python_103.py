def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    rounded_avg = round(avg)
    binary = bin(rounded_avg)[2:]
    return "0b" + str(binary).zfill(len(str(2 ** len(str(rounded_avg)) - 1)))