def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(i + pos)
        i += pos + 1
    return indices


# test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))