```Python
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    avg += 1 if (n + m) % 2 != 0 else 0
    bin_avg = format(int(round(avg)), "b").zfill(9)
    return bin_avg