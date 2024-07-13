def find_zero():
    a = float(input("Enter coefficient a: "))
    b = float(input("Enter coefficient b: "))
    c = float(input("Enter coefficient c: "))
    d = float(input("Enter coefficient d: "))

    if (b * d) - (a * c) == 0:
        return "No real solution exists."
    else:
        x = (-b + ((b**2) - 4 * a * c) ** 0.5) / (2 * a)
        return f"The zero is {x:.2f}"