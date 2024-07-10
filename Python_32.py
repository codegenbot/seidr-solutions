```
xs = [int(x) for x in input("Enter the coefficients: ").split()]
if len(xs) % 2 != 0:
    raise ValueError("xs must have even number of coefficients")
print(find_zero(xs))