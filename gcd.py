Here is the completed code:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text) - len(target) + 1:
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices