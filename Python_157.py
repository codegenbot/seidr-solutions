def right_angle_triangle(a, b, c):
    sides = [a, b, c]
    sides.sort()
    return sides[0] ** 2 + sides[1] ** 2 == sides[2] ** 2