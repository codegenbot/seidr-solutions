def gcd(a, b):
    while a % b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text.find(target, i) != -1:
            indices.append(i)
    return indices