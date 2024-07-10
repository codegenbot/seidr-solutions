def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a = int(input("Enter first side of the triangle: "))
b = int(input("Enter second side of the triangle: "))
c = int(input("Enter third side of the triangle: "))

print(is_pythagorean_triplet(a, b, c))