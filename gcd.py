def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result


# Testing the code
print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))