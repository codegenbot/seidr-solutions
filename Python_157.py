a, b, c = map(int, input().split())
is_valid_triangle = a > 0 and b > 0 and c > 0 and a + b > c and a + c > b and b + c > a
is_right_triangle = a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2
print("Invalid input. Please enter valid side lengths for a triangle." if not is_valid_triangle else is_right_triangle)