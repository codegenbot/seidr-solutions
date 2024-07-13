bounciness_index = lambda s, f: (f / s)


def calculate_total_distance(s, f, n):
    bi = bounciness_index(s, f)
    return round((1 - math.pow(bi, -n)) * s / (bi**2), 4)


s = float(input())
f = float(input())
n = int(input())

print(calculate_total_distance(s, f, n))