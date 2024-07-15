def rounded_avg(n, m):
    if n > m:
        return -1
    elif n == m:
        avg = (n + m) / 2.0
        int_avg = round(avg)
        return format(int_avg, 'b')
    avg = (n + m) / 2.0
    int_avg = round(avg)
    if int_avg % 2 != 0:
        return format(int_avg + 1, 'b')[2:]
    else:
        return format(int_avg, 'b')[2:]