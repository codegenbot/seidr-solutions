def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        index = text.find(target, index)
        if index == -1:
            break
        indices.append(index + 1)
        index += 1
    return indices