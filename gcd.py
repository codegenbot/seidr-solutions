def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    target_len = len(target)
    for i in range(len(text)):
        if text[i : i + target_len] == target:
            indices.append(i)
    return indices


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))