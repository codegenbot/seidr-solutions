def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
            i = pos + 1
        else:
            break
    return indices

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))