def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices