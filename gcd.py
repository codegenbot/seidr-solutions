def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    target_length = len(target)
    for i in range(len(text) - target_length + 1):
        if text[i : i + target_length] == target:
            indices.append(i)
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))