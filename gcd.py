```
a, b = map(int, input("Enter two integers (separated by space): ").strip().split())
print(gcd(a, b))

text = input("Enter text: ")
target = input("Enter target string: ")

def indices_of_substring(text, target):
    start = 0
    indices = []
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

print(*indices_of_substring(text, target))