def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    target_len = len(target)
    text_len = len(text)

    for i in range(text_len - target_len + 1):
        if text[i : i + target_len] == target:
            indices.append(i)

    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))