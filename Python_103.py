```
import math

def rounded_avg(n, m):
    if n > m:
        return -1
    elif n < m:
        n, m = m, n
    avg = round((n + m) / 2.0)
    
    bin_str = bin(avg)[2:]
    
    return "0b" + bin_str.zfill(8)

print(rounded_avg(5, 3))