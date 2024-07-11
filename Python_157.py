def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2

a, b, c = sorted([int(input()) for _ in range(3)], reverse=True)
result = is_pythagorean_triplet(a, b, c)