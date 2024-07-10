```
import math

def rounded_avg(n, m):
    avg = (n + m) / 2
    if n > m:
        return -1
    while True:
        if int(avg) == round(avg):
            break
        avg /= 2
    bin_str = "0b" + "".join("10"[int(i) % 2::][::-1] for i in str(int(avg)).zfill(8))
    return bin_str

print(rounded_avg(5, 3))