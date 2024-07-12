```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())

print(gcd(a, b))

def find_indices(text, target):
    indices = [i for i in range(len(text)-len(target)+1) if text.startswith(target, i)]
    return indices

text = input()
target = input()

print(find_indices(text, target))