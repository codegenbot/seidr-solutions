import math

def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2]
    return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)

a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

result = find_zero([a, b, c])
print("The zero of the quadratic equation is:", result)