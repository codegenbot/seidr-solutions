Here is the Python solution for the given problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

result = []
index = 0
while index < len(text) - len(target) + 1:
    if text[index:index+len(target)] == target:
        result.append(index)
    index += 1

print(gcd(int(input()), int(input())))
print(result)