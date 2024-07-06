def gcd(a, b):
    while a % b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
        # Check for overlapping occurrences of the target string.
        for j in range(1, window_size - 1):
            if text[i : i + j] == target:
                indices.append(i)
    return indices