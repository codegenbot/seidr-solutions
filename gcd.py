def gcd(a, b):
    if a < 0 and b < 0:
        return -1 * gcd(-a, -b)

    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = set()
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.add(i)
    return list(indices)