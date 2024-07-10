```
import math

def rounded_avg(n, m):
    avg = (n + m) / 2
    if n > m:
        return -1
    bin_str = "0b"
    while True:
        if int(avg) == round(avg):
            break
        avg /= 2
        bin_str += "10"[int(avg) % 2::][::-1]
    return bin_str.ljust(8, '0')

print(rounded_avg(5, 3))