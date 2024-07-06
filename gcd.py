def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    window_size = len(target)
    start = 0
    end = window_size - 1
    indices = []
    while start < len(text) - window_size + 1:
        if text[start : end + 1] == target:
            indices.append(start)
        start += 1
        end += 1
    return indices