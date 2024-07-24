a, b, c = map(int, input().split())
def is_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2
print(is_pythagorean_triplet(a, b, c))