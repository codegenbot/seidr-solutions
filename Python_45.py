def triangle_area(a, h):
    return 0.5 * a * h

try:
    a, h = input("Enter the length of a side and the height of the triangle (e.g., 5 12.3): ").split()
    a = float(a)
    h = float(h)
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    result = triangle_area(a, h)
    print(result)
except ValueError as e:
    print(e)
except Exception:
    print("An error occurred. Please try again.")