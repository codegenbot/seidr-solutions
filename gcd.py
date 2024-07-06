
def indices_of_substring(text, target):
    window_size = min(len(target), len(text))
    indices = []
    for i in range(len(text)):
        if text[i:i+window_size] == target:
            indices.append(i)
    return indices