def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(i for i in range(n, m + 1))
    count = m - n + 1
    avg = round(total / count)
    binary = bin(avg).lstrip("0").lstrip("-") or "0"
    return binary.zfill(6)