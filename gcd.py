a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text, target = input("Enter text and target string (separated by space): ").split()
print(*indices_of_substring(text, target))