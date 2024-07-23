def find_zero(xs: list):
    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")

    a = xs[0]
    b = xs[1]
    c = sum(xs[2:]) / (len(xs) - 2)

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)

input_list = input("Enter the list of coefficients (a, b, c): ").split()
xs = [float(i) for i in input_list]
try:
    result = find_zero(xs)
    print(result)
except ValueError as e:
    print(str(e))