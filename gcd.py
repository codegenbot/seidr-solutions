def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

def find_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices

print(gcd(int(input()), int(input())))
print(find_indices(text, target))