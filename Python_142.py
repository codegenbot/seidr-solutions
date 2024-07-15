```
def calculate_rectangle_area(length, width):
    if not (isinstance(length, int) and isinstance(width, int)):
        raise ValueError("The length and width must be integers.")
    return length * width

length = int(input("Enter the length: "))
width = int(input("Enter the width: "))

print(f"The area of the rectangle is {calculate_rectangle_area(length, width)}")