def right_angle_triangle(a, b, c):
    return is_pythagorean_triple(a, b, c) or is_pythagorean_triple(b, c, a) or is_pythagorean_triple(c, a, b)