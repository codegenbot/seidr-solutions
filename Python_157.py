a, b, c = sorted(map(int, input().split()), reverse=True)
def is_pythagorean_triplet(a, b, c):
    return a**2 == b**2 + c**2 or b**2 == a**2 + c**2 or c**2 == a**2 + b**2
result = is_pythagorean_triplet(a, b, c)