Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

result = []
pos = 0
while pos < len(text):
    pos = text.find(target, pos)
    if pos == -1:
        break
    result.append(pos + 1)
    pos += 1

print(gcd(int(input()), int(input())))
print(result)