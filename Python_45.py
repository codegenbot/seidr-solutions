def triangle_area(a, h):
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    return 0.5 * a * h

a = float(input())
h = float(input())
print(triangle_area(a, h))