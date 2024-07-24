def calculate_area_and_perimeter() -> float:
    def check(length: int, width: int) -> tuple(float, float):
        if length < 0 or width < 0:
            return None
        area = length * width
        perimeter = 2 * (length + width)
        return area, perimeter

    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))

    result = check(length, width)

    if result is None:
        print("Invalid input. Please enter positive values.")
    else:
        area, perimeter = result
        print(f"Area: {area}, Perimeter: {perimeter}")