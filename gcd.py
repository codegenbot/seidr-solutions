try:
    a, b = map(int, input("Enter two integers (separated by space): ").split())
except ValueError:
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

print(gcd(a, b))

text, target = input("Enter text and target string (separated by space): ").split()
print(*indices_of_substring(text, target))