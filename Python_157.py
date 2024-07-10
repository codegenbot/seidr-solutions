while True:
    a, b, c = map(int, input("Enter three side lengths of a triangle: ").split())
    is_valid_triangle = a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a
    if is_valid_triangle:
        break
    print("Invalid input. Please enter valid side lengths for a triangle.")

is_right_triangle = a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2
print("Yes" if is_right_triangle else "No")