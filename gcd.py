```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices(text, target))