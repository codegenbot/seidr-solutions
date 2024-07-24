def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2


def right_angle_triangle():
    a = int(input("Enter the first side length: "))
    b = int(input("Enter the second side length: "))
    c = int(input("Enter the third side length: "))

    if is_pythagorean_triple(a, b, c):
        print("Yes, it is a right angle triangle.")
    else:
        print("No, it is not a right angle triangle.")


right_angle_triangle()