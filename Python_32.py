```
def find_zero(xs):
    n = len(xs)
    s = sum(x for x in xs if i % 2 == 0 for i in range(n))
    s -= sum(x for x in xs if i % 2 != 0 for i in range(n))
    return -s / (sum((i**2) for i in xs if i % 2 == 0) - sum((i**2) for i in xs if i % 2 != 0))

xs = [int(x) for x in input("Enter the coefficients: ").split()]
if len(xs) % 2 != 0:
    raise ValueError("xs must have even number of coefficients")
print(find_zero(xs))