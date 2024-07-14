def find_gcd(a, b):
    if abs(a) <= 0 and abs(b) <= 0:
        return abs(a)
    while b != 0:
        a, b = b, a % b
    return abs(a)

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

gcd_value = find_gcd(num1, num2)
print(f"The GCD of {num1} and {num2} is {gcd_value}")