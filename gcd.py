def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def indices_of_substring(text, target):
    window_size = len(target)
    indices = []
    for i in range(len(text)):
        if text[i : i + window_size] == target and i % window_size == 0:
            indices.append(i)
    return [idx for idx in text.find(target) if text[idx : idx + window_size] == target]