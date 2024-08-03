```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = ""
    for i in range(31):  
        most_significant_bit_n = (n >> i) & 1
        most_significant_bit_m = (m >> i) & 1
        avg += "0" if (most_significant_bit_n + most_significant_bit_m) % 2 == 0 else "1"
    return format(int(avg, 2), "b")