```
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
text, target = input("Enter text and target string (separated by space): ").split()
print(gcd(a, b))
print(*indices_of_substring(text, target))