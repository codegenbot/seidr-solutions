def triangle_area(a, b, c):
    s = (a + b + c) / 2
    area = (s * (s - a) * (s - b) * (s - c)) ** 0.5 if a + b > c and a + c > b and b + c > a else -1
    return round(area, 2) if area != -1 else -1