def triangle_area(a, h):
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    return 0.5 * a * h

try:
    a = int(input("Enter the length of a side: "))
    h = int(input("Enter the height of the triangle: "))
    print(triangle_area(a, h))
except ValueError as e:
    print("Error:", e)