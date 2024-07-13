```
def find_zero():
    n = int(input("Enter number of coefficients: "))
    xs = []
    for i in range(n):
        x = float(input(f"Enter coefficient {i+1}: "))
        xs.append(x)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -xs[1] / xs[3]
    return round(x, 2)