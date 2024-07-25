```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2  
    avg = str(round(avg)) % 2 == 1 and "1" or "0"
    bin_avg = format(int(avg), 'b')  
    return "0b" + bin_avg