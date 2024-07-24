def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n | m) >> ((m.bit_length() + 1) // 2)
    return bin(avg)[2:]