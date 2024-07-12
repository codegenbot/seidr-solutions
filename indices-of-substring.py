def indices_of_substring(text, target):
    indices = [i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)]
    return indices