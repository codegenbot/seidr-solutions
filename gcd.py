```
while True:
    values = input("Enter two integers (separated by space): ").split()
    try:
        a, b = map(int, values)
        if len(values) != 2:
            print("Please enter exactly two integers.")
        else:
            break
    except ValueError:
        print("Please enter exactly two integers.")

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text, *targets = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(text, *targets))

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result