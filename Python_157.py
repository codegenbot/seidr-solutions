a, b, c = map(int, input("Enter three integers separated by space: ").split())
if a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a:
    print("Invalid input. Please enter valid side lengths for a triangle.")
else:
    print((a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2))