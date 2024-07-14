def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target)) if text[i:i+len(target)+1] == target]