def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        indices.append(pos)
        i = pos + 1
    return indices


# Test cases
print(gcd(1, 1))  # Output: 1
print(gcd(4, 400000))  # Output: 4
print(gcd(54, 24))  # Output: 6
print(gcd(4200, 3528))  # Output: 168
print(gcd(820000, 63550))  # Output: 2050