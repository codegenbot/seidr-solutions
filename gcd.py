```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target)
        while pos != -1:
            result.append(i + pos)
            pos = text.find(target, pos + 1)
    return result