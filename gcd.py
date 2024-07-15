```
def gcd(a, b):
    if a < 0:
        a = -a
    if b < 0:
        b = -b
    if a == 0 and b == 0:
        return float('inf')
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices