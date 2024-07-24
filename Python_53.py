```
def calculate_area_and_perimeter(length: int, width: int):
    area = length * width
    perimeter = 2 * (length + width)
    
    while True:
        try:
            length = float(input("Enter the length of the rectangle: "))
            width = float(input("Enter the width of the rectangle: "))
        except ValueError:
            print("Both inputs must be numbers")
        else:
            break
    result_area = area
    result_perimeter = perimeter

    user_input = input(f"Area: {result_area}, Perimeter: {result_perimeter}. Do you want to continue? (yes/no): ")

    while True:
        if user_input.lower() in ["yes", "no"]:
            break
        user_input = input("Invalid input. Please enter yes or no: ")

    if user_input.lower() == "yes":
        return result_area, result_perimeter
    else:
        return None