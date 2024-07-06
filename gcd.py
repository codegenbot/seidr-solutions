def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a if a >= 0 else -a


def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target:
            indices.append(i)
            # If the current index is the last character of the target,
            # add it to the list of indices as well.
            if i + window_size == len(text):
                indices.append(i)
    return [idx for idx in text.find(target) if text[idx : idx + window_size] == target]