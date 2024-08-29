def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start_index = 0
    while True:
        pos = text.find(target, start_index)
        if pos == -1:
            break
        indices.append(pos)
        start_index = pos + 1
    return indices