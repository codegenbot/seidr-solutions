```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print([i for i in range(len(text)-len(target)+1) if text.startswith(target, i)])