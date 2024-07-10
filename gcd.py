```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

values = input("Enter two integers (separated by space): ").split()
if len(values) != 2:
    print("Error: Enter exactly two integers separated by space.")
else:
    a, b = map(int, values)
    print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target string: ")
print(*indices_of_substring(text, target))