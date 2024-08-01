```
def find_zero():
    xs = input("Enter coefficients (space-separated): ").split()
    try:
        xs = [float(x) for x in xs]
    except ValueError:
        raise ValueError("Invalid input. Please enter space-separated float numbers.")

    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -sum([x / xs[-1] for i, x in enumerate(xs) if i % 2 == 1])
    return round(x, 2)