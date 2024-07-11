def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or any(text[i + j] != target[j] for j in range(len(target))]