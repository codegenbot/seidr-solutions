```
def calculate_area_and_perimeter() -> object:
    while True:
        try:
            length = float(input("Enter the length of the rectangle: "))
            width = float(input("Enter the width of the rectangle: "))
        except ValueError:
            print("Both inputs must be numbers")
        else:
            break
    area = length * width
    perimeter = 2 * (length + width)

    user_input = input(f"Area: {area}, Perimeter: {perimeter}. Do you want to continue? (yes/no): ")

    while True:
        if user_input.lower() in ["yes", "no"]:
            break
        user_input = input("Invalid input. Please enter yes or no: ")

    if user_input.lower() == "yes":
        return area, perimeter
    else:
        return None