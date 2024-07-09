```
try:
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

except ValueError:
    print("Invalid input! Please enter integers.")
else:
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a

    print(gcd(a, b))