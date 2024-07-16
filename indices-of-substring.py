def indices_of_substring(text, target):
    return [i for i in range(len(text)) if i <= len(text) - len(target) and text[i:i+len(target)] == target]