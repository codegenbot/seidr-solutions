def indices_of_substring(text, target):
    indices = [i for i, c in enumerate(text) if c == target[0] and text[i:].startswith(target)]
    return indices