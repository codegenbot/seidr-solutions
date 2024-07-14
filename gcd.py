a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(f"GCD of {a} and {b} is {gcd(min(a, b), max(a, b))}")