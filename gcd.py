```
values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, values)
    print(gcd(a, b))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

values = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(*values))

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]