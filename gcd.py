def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

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

values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    a, b = map(int, values)
else:
    print(gcd(a, b))

text, *targets = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(text, *targets))