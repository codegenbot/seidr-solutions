a, b, c = input().split()

if a.isdigit() and b.isdigit() and c.isdigit():
    a, b, c = map(int, (a, b, c))
    if a > 0 and b > 0 and c > 0:
        is_pythagorean = (a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2)
        print(is_pythagorean)