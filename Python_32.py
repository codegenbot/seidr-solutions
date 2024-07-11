```
xs = input("Enter coefficients separated by spaces: ").split()
if len(xs) > 0:
    try:
        xs = list(map(float, xs))
        print(find_zero(xs))
    except ValueError as e:
        print(e)
else:
    print("Please enter at least one coefficient.")