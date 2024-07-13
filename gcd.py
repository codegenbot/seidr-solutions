def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    last_index = 0
    while True:
        pos = text.find(target, last_index)
        if pos == -1:
            break
        indices.append(pos)
        last_index = pos + 1
    return indices


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))