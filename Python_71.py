```
import math

def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round(math.sqrt(s * (s - a) * (s - b) * (s - c)), 2)
    else:
        return -1