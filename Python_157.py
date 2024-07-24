def check(right_angle_triangle):
    a, b, c = right_angle_triangle
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2