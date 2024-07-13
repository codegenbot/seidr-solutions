def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    return format(round(avg), 'b').zfill((avg+1).bit_length())