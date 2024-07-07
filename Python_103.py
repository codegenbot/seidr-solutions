def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m + 1))
    avg = round(total / len(range(n, m + 1)))
    return bin(avg)[2:] + "b"