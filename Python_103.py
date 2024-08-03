def rounded_avg(n, m):
    if n > m:
        return "Invalid input: n should not be greater than m"
    avg = (n + m) / 2
    return str(int(avg)).zfill(1)