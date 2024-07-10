a, b, c = map(int, input("Enter three space-separated integers: ").split())

def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

print(is_pythagorean_triplet(a, b, c))