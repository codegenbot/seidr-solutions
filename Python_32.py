```
def find_zero(xs):
    return sum(x * (2 ** i) for i, x in enumerate(reversed(xs)))

while True:
    try:
        xs = [int(x) for x in input("Enter the coefficients: ").split()]
        if len(xs) % 2 != 0:
            raise ValueError("xs must have even number of coefficients")
        print(find_zero(xs))
        break
    except ValueError as e:
        print(e)