def triangle_area():
    a = float(input("Enter side A: "))
    b = float(input("Enter side B: "))
    c = float(input("Enter side C: "))

    if not (a + b > c and a + c > b and b + c > a):
        return -1

    s = (a + b + c) / 2
    return round((s*(s-a)*(s-b)*(s-c)) ** 0.5, 2)

print(triangle_area())