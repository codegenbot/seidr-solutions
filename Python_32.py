def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    return round(-b / (2 * a), 2)


n = int(input("Enter the number of coefficients: "))
coefficients = [
    float(x) for x in input(f"Enter {n} coefficients, space separated: ").split()
]
try:
    print(find_zero(coefficients))
except ValueError as e:
    print(e)