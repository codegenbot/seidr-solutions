import math

def find_zero(xs: list):
    a, b, c, d = xs
    q = (3 * a * c - b**2) / (9 * a**2)
    r = (9 * a * b * c - 27 * a**2 * d - 2 * b**3) / (54 * a**3)
    delta = q**3 + r**2

    if delta < 0:
        theta = math.acos(r / math.sqrt(-q**3))
        root_1 = 2 * math.sqrt(-q) * math.cos(theta/3) - b / (3 * a)
        return round(root_1, 2)
    else:
        A = -math.copysign(abs(r) + math.sqrt(delta), r)**(1/3)
        B = A if A == 0 else -q / A
        root_1 = (A + B) - b / (3 * a)
        return round(root_1, 2)