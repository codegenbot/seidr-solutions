def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(range(n, m+1))
    avg_int = round(total / (m-n+1))
    avg_frac = format((total % (m-n+1)) * 2, 'b').zfill(int(math.log2(m-n+1))+1).replace('0.', '.')
    return f"{avg_int}{avg_frac}"