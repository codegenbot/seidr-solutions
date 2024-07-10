a, b, c = map(int, input("Enter three integers separated by space: ").split())
print((a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2))