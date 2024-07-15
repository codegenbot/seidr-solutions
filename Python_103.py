```
def rounded_avg(n, m):
    if n > m:
        return -1
    elif n == m:
        avg = (n + m) / 2.0
        binary_avg = bin(int(round(avg)))[2:]
        return binary_avg
    avg = (n + m) / 2.0
    int_avg = round(avg)
    if int_avg % 2 != 0:
        return format(int_avg + 1, "b")[2:]
    else:
        return format(int_avg, "b")[2:]


print(rounded_avg(5, 6))