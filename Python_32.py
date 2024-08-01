```
def find_zero():
    try:
        xs = [float(x) for x in input("Enter space-separated coefficients: ").split()]
        n = len(xs)
        if n % 2 != 0:
            raise ValueError("xs must have an even number of coefficients")
        x = -sum([x / xs[-1] for i, x in enumerate(xs) if i % 2 == 1])
        return round(x, 2)
    except ValueError as e:
        print(e)
        return None