a, b, c = map(int, input().split())
is_pythagorean = (a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2)
print(is_pythagorean)