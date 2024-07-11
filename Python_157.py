def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2

a, b, c = sorted(map(int, input("Enter a, b, c separated by spaces: ").split()))
result = is_pythagorean_triplet(a, b, c)