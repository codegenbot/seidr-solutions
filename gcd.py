def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices


print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))