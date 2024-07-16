def right_angle_triangle(a, b, c):
    def is_pythagorean_triple(a, b, c):
        return a**2 + b**2 == c**2
    return is_pythagorean_triple(a, b, c)