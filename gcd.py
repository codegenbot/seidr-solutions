def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos != -1:
            result.append(pos)
            pos += 1 
        else:
            break
    return result