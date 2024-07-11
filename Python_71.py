def user_input():
    a = float(input("Enter side A: "))
    b = float(input("Enter side B: "))
    c = float(input("Enter side C: "))

    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        area = round((s * (s - a) * (s - b) * (s - c)) ** 0.5, 2)
        return f"The area of the triangle is {area}"
    else:
        return "Not a valid triangle"