def triangle_area(a, h):
    return 0.5 * a * h


try:
    a = float(input("Enter the length of a side: "))
    h = float(input("Enter the height of the triangle: "))
    print(triangle_area(a, h))
except Exception:
    print("Invalid input. Please enter numeric values.")