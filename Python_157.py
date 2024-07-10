a, b, c = map(int, input().strip().split())
if a + b <= c or a + c <= b or b + c <= a:
    print("Invalid input. Please enter valid side lengths for a triangle.")
else:
    is_right_triangle = a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2
    print("Yes" if is_right_triangle else "No")