```
def gcd(a, b):
    if b == 0:
        return abs(a)
    else:
        return gcd(b, a % b)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos == -1:
            break
        result.append(pos)
        index = pos + 1
    return result


# test cases
print(gcd(621821, 238148))