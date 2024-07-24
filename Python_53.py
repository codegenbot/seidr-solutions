def calculate_area_and_perimeter():
    def check(length: int, width: int):
        if length < 0 or width < 0:
            return lambda: (0,)
        area = length * width
        perimeter = 2 * (length + width)
        return lambda: (area, perimeter)

    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))

    result = check(length, width)()

    if result[0] == 0:
        print("Invalid input. Please enter positive values.")
    else:
        area, perimeter = result
        print(f"Area: {area}, Perimeter: {perimeter}")