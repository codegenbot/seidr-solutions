
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
        # Add all overlapping occurrences to the list of indices
        while text[i + 1 : i + window_size] == target:
            indices.append(i + 1)
    return indices