a, b, c = map(int, input().strip().split())

def is_pythagorean_triple(a, b, c):
    return sorted([a, b, c])[0] ** 2 + sorted([a, b, c])[1] ** 2 == sorted([a, b, c])[2] ** 2

print(is_pythagorean_triple(a, b, c))