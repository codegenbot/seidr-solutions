values = input("Enter two integers (separated by space): ")
values = list(map(int, values.split()))
if len(values) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = values
    print(math.gcd(a, b))