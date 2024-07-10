try:
    a, b, c = map(int, input().split())
except ValueError:
    print("Invalid input. Please enter integers only.")
else:
    if a <= 0 or b <= 0 or c <= 0:
        print("Invalid input. Please enter positive integers.")
    else:
        is_pythagorean = (a**2 + b**2 == c**2) or (a**2 + c**2 == b**2) or (b**2 + c**2 == a**2)
        print(is_pythagorean)