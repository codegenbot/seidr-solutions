Here is the Python solution for the problem:

```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        index += pos + 1
        text = text[pos + len(target):]
    return indices

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))