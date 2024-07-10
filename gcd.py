Here is the solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

start = 0
indices = []
while start < len(text):
    pos = text.find(target, start)
    if pos == -1:
        break
    indices.append(pos + 1)
    start = pos + 1

print(gcd(int(input()), int(input())))
print(indices)