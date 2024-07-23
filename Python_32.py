def find_zero():
    xs = input("Enter coefficients (a b c): ").split()
    try:
        a, b, c = map(float, xs)
    except ValueError:
        print("Invalid input")
        return

    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)

print(find_zero())