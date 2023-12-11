def get_indices(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]