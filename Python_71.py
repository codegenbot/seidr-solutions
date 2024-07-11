def triangle_area():
    a = int(input("Enter side A: "))
    b = int(input("Enter side B: "))
    c = int(input("Enter side C: "))

    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round((s * (s - a) * (s - b) * (s - c)) ** 0.5, 2)
    else:
        return -1