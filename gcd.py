```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:i+len(target)] == target:
            indices.append(i)
        i += 1
    return indices

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(find_indices(text, target))