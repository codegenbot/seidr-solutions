```
def calculate_area_of_rectangle():
    width = float(input("Enter width of rectangle: "))
    height = float(input("Enter height of rectangle: "))

    if width <= 0 or height <= 0:
        print("Invalid input. Please enter a positive number.")
    else:
        area = width * height
        print(f"Area of the rectangle is {area:.2f} square units.")

calculate_area_of_rectangle()