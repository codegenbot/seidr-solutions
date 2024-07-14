```
def gcd(a, b):
    if a == 0:
        return abs(b)
    elif b == 0:
        return abs(a)
    else:
        while b:
            a, b = b, a % b
        return abs(a)


def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += len(target)