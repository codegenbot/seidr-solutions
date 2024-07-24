def triangle_area(a, h):
    return 0.5 * a * h

try:
    a = float(input("Enter the length of a side of the triangle: "))
    if a <= 0:
        raise ValueError("Invalid input. Please enter a positive numeric value for side length.")
    
    h = float(input("Enter the height of the triangle: "))
    if h <= 0:
        raise ValueError("Invalid input. Please enter a positive numeric value for height.")
    
    result = triangle_area(a, h)
    print(result)
except ValueError as e:
    print(e)
except Exception:
    print("An error occurred. Please try again.")