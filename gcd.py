def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))