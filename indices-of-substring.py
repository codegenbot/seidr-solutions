def indices_of_substring(text, target):
    overlap_indices = [i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)]
    return overlap_indices