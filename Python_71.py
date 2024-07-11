def triangle_area():
    a = float(input("Enter side a: "))
    b = float(input("Enter side b: "))
    c = float(input("Enter side c: "))
    
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        area = round((s * (s - a) * (s - b) * (s - c)) ** 0.5, 2)
    else:
        area = -1
    return area