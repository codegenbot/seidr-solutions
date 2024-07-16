```
def gcd(a, b):
    if a == 0:
        return abs(b)
    elif b == 0:
        return abs(a)
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices


print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))