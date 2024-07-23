```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have three coefficients")

    a = xs[0]
    b = xs[1]
    c = xs[2]

    x = (-b + ((b ** 2 - 4 * a * c) ** 0.5)) / (2 * a)
    return round(x, 10)

# Get input from user
input_str = input("Enter the coefficients of your quadratic equation (a, b, c): ")
coefficients = [float(x) for x in input_str.split(",")]

try:
    result = find_zero(coefficients)
    print(f"The zero is: {result}")
except ValueError as e:
    print(e)