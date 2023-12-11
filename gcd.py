def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices