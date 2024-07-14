```
def gcd(a, b):
    if a == 0 and b == 0:
        return 0
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
        result.append(pos)
        pos += 1
    return result