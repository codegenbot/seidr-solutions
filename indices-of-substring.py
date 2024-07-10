def indices_of_substring(text, target):
    return [i for i, char in enumerate(text) if text[i:i+len(target)] == target]