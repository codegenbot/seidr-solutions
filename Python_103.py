import math

def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2)
    bin_str = "0b"
    while avg > 1:
        avg //= 2
        bin_str += "10"[avg % 2::]
    return bin_str.ljust(8, '0')

print(rounded_avg(5, 3))