```
import math


def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    bin_str = ""
    while avg > 1:
        avg //= 2
    bin_str = "0b" + bin(avg)[2:].ljust(8, "0")
    return bin_str


print(rounded_avg(5, 3))