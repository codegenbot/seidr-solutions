def is_pythagorean_triple():
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))
    c = int(input("Enter the third integer: "))

    if a <= 0 or b <= 0 or c <= 0:
        return False

    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

if is_pythagorean_triple():
    print(True)
else:
    print("Input values do not form a Pythagorean triple.")