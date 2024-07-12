x, y = input("Enter two integers separated by a space: ").strip().split()
if x.isdigit() and y.isdigit():
    result = int(x) * int(y)
    print(result)
else:
    print("Invalid input. Please enter two integers separated by a space.")