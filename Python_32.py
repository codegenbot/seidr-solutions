def find_zero(a, b, c):
    discriminant = (b**2) - (4 * a * c)

    if discriminant > 0:
        root1 = (-b + discriminant**0.5) / (2 * a)
        root2 = (-b - discriminant**0.5) / (2 * a)
        return f"Roots: {root1} and {root2}"
    elif discriminant == 0:
        root = -b / (2 * a)
        return f"Root: {root}"
    else:
        return "No real roots"

print(find_zero(float(input("Enter coefficient a: ")), float(input("Enter coefficient b: ")), float(input("Enter constant c: "))))