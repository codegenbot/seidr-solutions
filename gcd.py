def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a) if a != 0 else 1

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result