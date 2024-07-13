```
def find_zero():
    xs = []
    while True:
        try:
            x = float(input("Enter a coefficient (or 'stop' to finish): "))
            if x == 'stop':
                break
            xs.append(x)
        except ValueError:
            print("Invalid input. Please enter a number.")
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -xs[1] / xs[3]
    return round(x, 2)