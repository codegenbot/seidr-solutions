Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    last_index = -1
    while True:
        start_index = text.find(target, last_index + 1)
        if start_index == -1:
            break
        indices.append(start_index)
        last_index = start_index + len(target) - 1
    return indices