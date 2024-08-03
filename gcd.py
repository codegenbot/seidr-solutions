def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices