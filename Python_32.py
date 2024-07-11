```
xs = [int(i) for i in input("Enter coefficients (a b c [d]): ").split()]
while len(xs) < 3:
    xs = [int(i) for i in input("Invalid input. Please enter exactly three coefficients: ").split()]