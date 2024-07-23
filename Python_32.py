```
def find_zero():
    while True:
        xs = input("Enter coefficients separated by space: ").split()
        try:
            xs = [float(i) for i in xs]
            if len(xs) % 2 != 0:
                raise ValueError("xs must have three coefficients")
            break
        except ValueError:
            print("Invalid input. Please enter three coefficients.")
    a = xs[0]
    b = xs[1]
    c = xs[2]

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)