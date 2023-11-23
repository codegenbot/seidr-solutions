def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


try:
    a, b = map(int, input().split())

    result = gcd(a, b)
    print(result)
except ValueError:
    print("ValueError: not enough values to unpack (expected 2, got 1)")

try:
    text, target = input().split()

    indices_result = indices_of_substring(text, target)
    print(indices_result)
except ValueError:
    print("ValueError: not enough values to unpack (expected 2, got 1)")