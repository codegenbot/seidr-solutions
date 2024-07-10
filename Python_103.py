import math


def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    bin_str = ""
    while avg > 0:
        if avg % 2 == 0:
            avg //= 2
        else:
            break
    return "0b" + ("10" * int(math.log2(avg)))[::-1].ljust(8, "0")


print(rounded_avg(5, 3))