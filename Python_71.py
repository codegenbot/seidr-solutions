def check(area):
    sqrt = int(area**0.5)
    if sqrt * sqrt == area:
        print("The area of the triangle is a perfect square.")
    else:
        print("The area of the triangle is not a perfect square.")


while True:
    try:
        base = float(input("Enter the base of the triangle: "))
        height = float(input("Enter the height of the triangle: "))

        break
    except ValueError:
        print("Invalid input. Please enter a number.")

triangle_area = (base * height) / 2

check(triangle_area)