def triangle_area(a, h):
    return 0.5 * a * h

try:
    a = float(input("Enter the length of a side: "))
    h = float(input("Enter the height of the triangle: "))
    if a <= 0 or h <= 0:
        raise ValueError("Side length and height must be positive numbers.")
    print(triangle_area(a, h))
except ValueError as e:
    print(f"Invalid input: {e}")