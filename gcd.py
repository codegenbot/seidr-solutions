a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text, *_ = input("Enter text: ").split()
target, *_ = input("Enter target string: ").split()
print(*indices_of_substring(text, target))