def indices_of_substring(text, target):
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or (i > 0 and text[i-1:i + len(target)] == target)]
    return indices