def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))