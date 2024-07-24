def rounded_avg(n, m):
    if n > m:
        return -1
    total = sum(i for i in range(n, m + 1))
    average = total / (m - n + 1)
    bin_str = format(int(round(average)), "06b")
    return bin_str