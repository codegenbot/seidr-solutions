def triangle_area(a, h):
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    return 0.5 * a * h


while True:
    try:
        a = float(input("Enter the length of a side (numeric value): "))
        h = float(input("Enter the height of the triangle (numeric value): "))
        result = triangle_area(a, h)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter numeric values.")
    except Exception:
        print("An error occurred. Please try again.")