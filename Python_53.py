def check(length: int, width: int):
    area_and_perimeter = calculate_area_and_perimeter(length, width)
    if area_and_perimeter:
        area, perimeter = area_and_perimeter
        print(f"Area: {area}, Perimeter: {perimeter}")
    else:
        print("Calculation stopped")