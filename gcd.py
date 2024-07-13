def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        result.append(index + pos)
        index += pos + len(target)
        text = text[pos + 1 :]
    return result


# Testing the code
print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))