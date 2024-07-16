def is_pythagorean_triple(a, b, c):
    sides = [a, b, c]
    sides.sort()
    return sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2

a, b, c = map(int, input().split())

print(is_pythagorean_triple(a, b, c))