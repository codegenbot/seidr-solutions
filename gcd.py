def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos + 1)
        pos += 1
    return result


# test the functions
print(gcd(1, 1))
print(indices_of_substring("This is a test", "is"))