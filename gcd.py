def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

start = 0
indices = []
while start < len(text):
    pos = text.find(target, start)
    if pos == -1:
        break
    indices.append(pos)
    start = pos + 1

print(indices)