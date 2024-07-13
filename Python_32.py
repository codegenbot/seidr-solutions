```
def find_zero():
    a = float(input("Enter coefficient of x^2: "))
    b = float(input("Enter coefficient of x: "))
    c = float(input("Enter constant term: "))

    d = b**2 - 4*a*c
    if d < 0:
        print("No real solution exists.")
    elif d == 0:
        x = -b / (2*a)
        print(f"x = {x}")
    else:
        x1 = (-b + d**0.5) / (2*a)
        x2 = (-b - d**0.5) / (2*a)
        if x1 > x2:
            print(f"x1 = {x1}, x2 = {x2}")
        else:
            print(f"x1 = {x2}, x2 = {x1}")