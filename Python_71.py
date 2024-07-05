
def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        area = (a * b * 0.5)
    else:
        area = -1
    return round(area, 2)