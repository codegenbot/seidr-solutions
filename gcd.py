def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    prev_indices = {}
    for i, c in enumerate(text):
        if c == target[0]:
            if text[i:i+len(target)] == target:
                prev_indices[i] = 1
    return list(prev_indices.keys())