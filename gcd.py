Here is the corrected code:

```Python
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

while True:
    values = input("Enter two integers (separated by space): ").split()
    try:
        a, b = map(int, values)
        break
    except ValueError:
        print("Please enter exactly two integers.")

print(gcd(a, b))

text, *targets = input("Enter text and target string(s) (separated by space): ").split(maxsplit=1)
print(*indices_of_substring(text, *targets))