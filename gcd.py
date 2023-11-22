def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

indices = []
for i in range(len(text)):
    if text[i:i+len(target)] == target:
        indices.append(i)

print(indices)