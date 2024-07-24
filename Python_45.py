def triangle_area(a, h):
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    return 0.5 * a * h

try:
    print(triangle_area(float(input("Enter the length of a side: ")), float(input("Enter the height of the triangle: ")))
except ValueError as e:
    print(e)