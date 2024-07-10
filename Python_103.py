import math

def rounded_avg(n, m):
    avg = (n + m) / 2
    if int(avg) == round(avg):
        return f"0b{bin(int(round(avg)))[2:].ljust(8, '0')}"
    else:
        bin_str = "0"
        while True:
            if int(avg) == round(avg):
                break
            avg /= 2
            bin_str += '01'[int(math.modf(avg)[0])]
        return bin_str.ljust(8, '0')

print(rounded_avg(5, 3))