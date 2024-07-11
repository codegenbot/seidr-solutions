Here is the completed code for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    target_length = len(target)
    start_index = 0
    while True:
        start_index += 1
        index = text.find(target, start_index)
        if index == -1:
            break
        indices.append(index)
        start_index = index + 1
    return indices