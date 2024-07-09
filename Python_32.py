import math

def solve(a, b, c):
    discriminant = b**2 - 4*a*c
    if discriminant < 0:
        return "No real roots"
    elif discriminant == 0:
        return -b / (2*a)
    else:
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        return root1, root2

print("Enter three integers separated by spaces:")
a, b, c = map(int, input().split())

result = solve(a, b, c)
print(result)