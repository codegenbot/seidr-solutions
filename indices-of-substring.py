def indices_of_substring(text, target):
    result = [0] if text.startswith(target) else []
    i = 1
    while i <= len(text) - len(target):
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result