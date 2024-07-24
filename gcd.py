Here is the Python code for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(index + pos)
        index += pos + 1
    return indices