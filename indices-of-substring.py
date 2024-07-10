def indices_of_substring(text, target):
    if not text.startswith(target):
        if target in text[1:]:
            result = [0] + [i for i in range(1, len(text)) if text[i:i+len(target)] == target]
        else:
            result = [0]
    else:
        result = [0] + [i for i in range(1, len(text)) if text[i:i+len(target)] == target]
    return result