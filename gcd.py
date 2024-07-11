values = input("Enter two integers (separated by space): ").split()
a, b = [int(value) for value in values]
print(gcd(a, b))

text, *targets = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(text, *targets))