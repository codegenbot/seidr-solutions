def calculate_area_and_perimeter():
    radius = int(input("Enter the radius of the circle: "))
    area = 3.14159 * (radius ** 2)
    perimeter = 2 * 3.14159 * radius
    return f"Area is {area}, Perimeter is {perimeter}"