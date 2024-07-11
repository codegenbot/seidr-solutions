def main():
    a = float(input("Enter the first side of the triangle: "))
    b = float(input("Enter the second side of the triangle: "))
    c = float(input("Enter the third side of the triangle: "))

    area = triangle_area(a, b, c)

    if area == -1:
        print("These sides do not form a valid triangle.")
    else:
        print(f"The area of the triangle is {area}.")


def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round((s * (s - a) * (s - b) * (s - c)) ** 0.5, 2)
    else:
        return -1


main()