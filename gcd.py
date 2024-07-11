```
values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    a, b = map(int, values)
    print(gcd(a, b))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

text, *_ = input("Enter text and target string (separated by space): ").split(maxsplit=1)
target = _[0]
print(*indices_of_substring(text, target))

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