```
def find_zero():
    while True:
        try:
            xs = [float(input("Enter coefficient a: ")),
                  float(input("Enter coefficient b: ")),
                  float(input("Enter coefficient c: "))
                 ]
            if len(xs) % 2 != 0:
                raise ValueError("xs must have three coefficients")
            break
        except ValueError as e:
            print(e)

    a = xs[0]
    b = xs[1]
    c = xs[2]

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)