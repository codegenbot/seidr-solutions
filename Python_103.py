import math
def rounded_avg(n, m):
    avg = (n + m) / 2.0
    return f"0b{bin(math.floor(avg))[2:].ljust(8, '0')}"