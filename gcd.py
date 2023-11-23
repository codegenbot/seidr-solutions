def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    if len(target) > len(text):
        return indices

    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


a, b = map(int, input().split()[:2])
result = gcd(a, b)
print(result)

text, target = input().split()[:2]
indices_result = indices_of_substring(text, target)
print(indices_result)