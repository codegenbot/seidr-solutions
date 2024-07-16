def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2

def right_angle_triangle():
    a = int(input("Enter the value of side a: "))
    b = int(input("Enter the value of side b: "))
    c = int(input("Enter the value of side c: "))

    if is_pythagorean_triple(a, b, c):
        print("The sides form a Pythagorean triple.")
    else:
        print("The sides do not form a Pythagorean triple.")

right_angle_triangle()