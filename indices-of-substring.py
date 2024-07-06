def indices_of_substring(text, target):
    return [i for i, c in enumerate(text) if c == target[0]]