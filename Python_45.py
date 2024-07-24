def triangle_area(a, h):
    if a <= 0 or h <= 0:
        raise ValueError("Invalid input. Please enter positive numeric values.")
    return 0.5 * a * h

valid_input = False
while not valid_input:
    try:
        a = float(input("Enter the length of a side: "))
        h = float(input("Enter the height of the triangle: "))
        if a <= 0 or h <= 0:
            raise ValueError("Invalid input. Please enter positive numeric values.")
        valid_input = True
    except ValueError as e:
        print(e)

result = triangle_area(a, h)
print(result)