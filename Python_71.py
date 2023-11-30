def triangle_area(a, b, c):
    if a + b > c and b + c > a and a + c > b:
        s = (a + b + c) / 2
        area = (s * (s - a) * (s - b) * (s - c)) ** 0.5
        return round(area, 2)
    else:
        return -1