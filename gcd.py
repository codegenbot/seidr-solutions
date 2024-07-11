```
values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, _ = map(int, values)
    print(gcd(a, 1))