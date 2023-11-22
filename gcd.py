def gcd(a, b):
    a = abs(a)
    b = abs(b)

    if a == 0 and b == 0:
        return 0
    elif a == 0 or b == 0:
        return max(a, b)

    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


a, b = map(int, input().split())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))