```
def calculate_area_and_perimeter():
    def check(length: int, width: int):
        if length < 0 or width < 0:
            return "Invalid input. Please enter positive values."
        area = length * width
        perimeter = 2 * (length + width)
        return f"Area: {area}, Perimeter: {perimeter}"

    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))

    result = check(length, width)

    print(result)