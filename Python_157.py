def check(right_angle_triangle, a, b, c):
    return right_angle_triangle(a, b, c)

def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2