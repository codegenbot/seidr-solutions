def calculate_area_and_perimeter() -> (float, float) or None:
    def check(add):
        if add:
            length = float(input("Enter the length: "))
            width = float(input("Enter the width: "))
            area = length * width
            perimeter = 2 * (length + width)
            return area, perimeter
        else:
            return None