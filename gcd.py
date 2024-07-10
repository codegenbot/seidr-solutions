values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Error: Enter exactly two integers separated by space.")
else:
    a, b = map(int, values)
    print(gcd(a, b))

text, *_ = input("Enter text and target string (separated by space): ").split(
    maxsplit=1
)
target = text
print(*indices_of_substring(text, target))