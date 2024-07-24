def triangle_area(a, h):
    return 0.5 * a * h

try:
    a = float(input("Enter the length of a base: "))
    h = float(input("Enter the height of the triangle: "))
    if a <= 0 or h <= 0:
        print("Values must be greater than 0.")
    else:
        print(triangle_area(a, h))
except ValueError:
    print("Invalid input. Please enter numeric values.")