```
def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        p = (a + b + c) / 2
        return round((p * (p - a) * (p - b) * (p - c)) ** 0.5, 2)
    else:
        return -1