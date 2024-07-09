def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2)
    return str(avg).lstrip("0") or "0"