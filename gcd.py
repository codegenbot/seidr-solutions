```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(i + pos)
        i += pos + 1
    return indices