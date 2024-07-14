Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos == -1:
            break
        indices.append(pos + 1)
        index = pos + 1
    return indices