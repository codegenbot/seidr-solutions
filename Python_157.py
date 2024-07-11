def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2

a, b, c = sorted([int(input("Enter a: ")), int(input("Enter b: ")), int(input("Enter c: "))], reverse=True)
result = is_pythagorean_triplet(a, b, c)