values = input("Enter two integers (separated by space): ")
if ' ' not in values:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, values.split())
    print(gcd(a, b))