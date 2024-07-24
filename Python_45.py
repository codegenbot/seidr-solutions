def triangle_area(a, h):
    return 0.5 * a * h

while True:
    try:
        a = float(input("Enter the length of a side: "))
        h = float(input("Enter the height of the triangle: "))
        if a <= 0 or h <= 0:
            raise ValueError("Invalid input. Please enter positive numeric values.")
        result = triangle_area(a, h)
        print(result)
        break
    except ValueError as e:
        print(e)
    except Exception:
        print("An error occurred. Please try again.")