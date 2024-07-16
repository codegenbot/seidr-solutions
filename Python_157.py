import sys

def is_pythagorean_triple(a, b, c):
    return sorted([a, b, c])[0] ** 2 + sorted([a, b, c])[1] ** 2 == sorted([a, b, c])[2] ** 2

a, b, c = map(int, sys.stdin.readline().split())
print(is_pythagorean_triple(a, b, c))