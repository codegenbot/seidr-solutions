```
values = input("Enter two integers (separated by space): ")
inputs = values.split()
if len(inputs) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, inputs)
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return abs(a)
    print(gcd(a, b))