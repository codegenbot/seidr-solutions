def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

result = is_pythagorean_triplet(a, b, c)