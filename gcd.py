from math import gcd


def gcd(a, b):
    return gcd(a, b)


def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
        # If the current index is the last character of the target, add it to the list of indices as well.
        if i + window_size - 1 == len(text):
            indices.append(i)
    return indices