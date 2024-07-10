def indices_of_substring(text, target):
    if not text.startswith(target):
        result = [0] if target in text[1:] else []
    else:
        result = [0]
    i = 1
    while i <= len(text) - len(target):
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result