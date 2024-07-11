```
values = input("Enter two integers (separated by space): ")
inputs = values.split()
if len(inputs) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, inputs)
    print(gcd(a, b))