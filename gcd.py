def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_indices(text, target):
    indices = []
    target_len = len(target)
    i = 0
    while i < len(text):
        if text[i:i+target_len] == target:
            indices.append(i)
            i += target_len
        else:
            i += 1
    return indices