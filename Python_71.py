def check(area):
    print(f"Triangle area is {area:.2f}")


base = float(input("Enter the base of the triangle: "))
height = float(input("Enter the height of the triangle: "))

triangle_area = (base * height) / 2

check(triangle_area)