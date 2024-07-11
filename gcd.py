values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, values)
    print(gcd(a, b))