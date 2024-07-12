def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    last_end = 0
    while True:
        pos = text.find(target, last_end)
        if pos == -1:
            break
        indices.append(pos)
        last_end = pos + len(target)
    return indices


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))