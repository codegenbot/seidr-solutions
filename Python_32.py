```python
import math

def find_zero(a, b, c):
    discriminant = b**2 - 4*a*c
    if discriminant < 0:
        return "Polynomial has no real zeros."
    elif discriminant == 0:
        root = -b / (2 * a)
        return root
    else:
        root1 = (-b + math.sqrt(discriminant)) / (2 * a)
        root2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return root1, root2