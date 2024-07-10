a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target string: ")
print(*indices_of_substring(text, target))