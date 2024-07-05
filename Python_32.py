```
import math
def find_zero(xs):
    if len(xs) < 1:
        print("Error: List should have at least one element.")
        return None
    
    for x in xs:
        if not isinstance(x, (int, float)):
            print("Error: All elements in the list should be numbers.")
            return None
            
    if len(xs) < 2:
        return -xs[1] / xs[0]
    elif len(xs) == 2:
        return -xs[1] / xs[0]
    else:
        b = xs[1]
        c = xs[-1]
        d = b**2 - 4*xs[0]*c
        if d < 0:
            print("Error: The equation has no real roots.")
            return None
        elif d == 0:
            root = (-b + math.sqrt(d)) / (2 * xs[0])
            print(f"The equation has one real root {root}.")
            return root
        else:
            root1 = (-b + math.sqrt(d)) / (2 * xs[0])
            root2 = (-b - math.sqrt(d)) / (2 * xs[0])
            print(f"The equation has two real roots {root1} and {root2}.")
            return root1, root2