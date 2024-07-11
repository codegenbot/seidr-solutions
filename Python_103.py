def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m+1))
    avg = round(total / (m-n+1))
    return f"0b{format(avg, 'b')}"