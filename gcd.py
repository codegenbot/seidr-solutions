def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos != -1:
            result.append(pos)
            index = pos + 1
        else:
            break
    return result


# Testing the code
print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))