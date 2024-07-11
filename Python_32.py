xs = list(map(int, input("Enter coefficients (a b c [d]): ").split()))
if len(xs) > 4:
    xs = xs[:4]
elif len(xs) < 3:
    print("Invalid number of inputs.")