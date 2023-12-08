def indices_of_substring(text, target):
    if not target:
        return []
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]