def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a = int(input("Enter first side of the triangle: ").strip())
b = int(input("Enter second side of the triangle: ").strip())
c = int(input("Enter third side of the triangle: ").strip())

print(is_pythagorean_triplet(a, b, c))