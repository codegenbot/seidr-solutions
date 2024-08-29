def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        indices.append(pos + 1)
        i = pos + 1
    return indices


# test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))