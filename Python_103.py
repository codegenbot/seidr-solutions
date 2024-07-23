def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    return ''.join(bin(i)[2:].zfill(16) for i in range(avg+1))