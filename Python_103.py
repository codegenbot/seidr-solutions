def rounded_avg(n, m):
    if n > m:
        return -1
    average = (n + m) // 2
    return bin(average)[2:]