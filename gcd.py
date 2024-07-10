```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a, *b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, int(b[0])))

text = input("Enter text: ")
target = input("Enter target string: ")
print(*indices_of_substring(text, target))

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