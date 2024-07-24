def find_zero():
    a = float(input("Enter coefficient a: "))
    b = float(input("Enter coefficient b: "))
    c = float(input("Enter constant c: "))

    if a == 0:
        if b == 0 and c != 0:
            print(f"Root: {-c / b}")
        else:
            print("No real roots")
    discriminant = (b**2) - (4 * a * c)

    if a == 0:
        print(f"Root: {-c / b}")
    elif discriminant > 0:
        root1 = (-b + discriminant**0.5) / (2 * a)
        root2 = (-b - discriminant**0.5) / (2 * a)
        print(f"Roots: {root1} and {root2}")
    elif discriminant == 0:
        root = -b / (2 * a)
        print(f"Root: {root}")
    else:
        print("No real roots")

find_zero()