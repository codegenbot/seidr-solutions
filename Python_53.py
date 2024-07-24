def calculate_area_and_perimeter():
    def check(length: int, width: int):
        if length < 0 or width < 0:
            return lambda: (0,)
        area = length * width
        perimeter = 2 * (length + width)
        return lambda: (area, perimeter)

    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))

    result = check(length, width)[0]

    if result[0] == 0:
        print("Invalid input. Please enter positive values.")
    else:
        print(f"Area: {result[0]}, Perimeter: {result[1]}")