def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2

print("Enter three numbers:")
a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

a, b, c = sorted([a, b, c])
result = is_pythagorean_triplet(a, b, c)