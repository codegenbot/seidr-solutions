import math

def rounded_avg(n, m):
    if n > m:
        return -1
    elif n < m:
        n, m = m, n
    avg = round((n + m) / 2.0)
    bin_str = ""
    while avg > 1:
        avg //= 2
    bin_str = "0b" + ("10" * math.ceil(math.log2(avg)))[::-1].ljust(8, "0")
    return bin_str

print(rounded_avg(5, 3))