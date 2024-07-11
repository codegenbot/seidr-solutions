```
xs = list(map(float, input("Enter coefficients (space separated): ").split()))
try:
    print(find_zero(xs))
except ValueError as e:
    print(str(e))