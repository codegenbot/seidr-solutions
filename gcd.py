def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        index += pos + 1
        text = text[pos + 1 :]
    return indices


# Test cases
print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))