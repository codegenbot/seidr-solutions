def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
    return indices

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))