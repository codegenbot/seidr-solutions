import math

def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2]
    return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)

coefficients = [float(input("Enter coefficient a: ")), float(input("Enter coefficient b: ")), float(input("Enter coefficient c: "))]
result = find_zero(coefficients)
print("The result is:", result)