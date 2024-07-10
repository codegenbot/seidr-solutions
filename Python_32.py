def find_roots(a: float, b: float, c: float):
    disc = b**2 - 4 * a * c
    if disc < 0:
        return "No real roots"
    elif disc == 0:
        root = -b / (2 * a)
        return (
            f"The quadratic equation {a}x^2 + {b}x + {c} has one repeated root: {root}"
        )
    else:
        root1 = (-b + math.sqrt(disc)) / (2 * a)
        root2 = (-b - math.sqrt(disc)) / (2 * a)
        return f"The quadratic equation {a}x^2 + {b}x + {c} has two distinct roots: {root1} and {root2}"