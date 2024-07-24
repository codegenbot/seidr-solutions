import math

def find_zero():
    xs = list(map(int, input().split()))

    a, b, c, d = xs

    if a == 0:
        return 0.0

    discriminant = b**2 - 3 * a * c
    if discriminant < 0:
        return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    else:
        return (-b + math.sqrt(discriminant)) / (3 * a)

result = find_zero()
print(result)