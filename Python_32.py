```
def find_zero(xs):
    n = len(xs)
    root_sum = sum(x for x in xs)
    zero = (-root_sum) / (2 * sum(x*y for x,y in zip(xs, xs)))
    return zero
xs = [int(x) for x in input("Enter the coefficients: ").split()]
if len(xs) % 2 != 0:
    raise ValueError("xs must have even number of coefficients")
print(find_zero(xs))