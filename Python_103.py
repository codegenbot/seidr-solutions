```
import math


def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    bin_str = "0b" + format(int(avg), 'b').zfill(8)
    return bin_str


print(rounded_avg(5, 3))