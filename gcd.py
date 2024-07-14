def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        indices.append(pos + 1)
        pos += len(target)
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(find_indices(text, target))