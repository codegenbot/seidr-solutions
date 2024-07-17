def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    current_index = 0
    while current_index < len(text):
        pos = text.find(target, current_index)
        if pos == -1:
            break
        result.append(pos)
        current_index = pos + 1
    return result


# Test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))