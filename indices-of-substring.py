def indices_of_substring(text, target):
    result = [i for i in range(len(text)) if text.startswith(target) and i <= len(text) - len(target)]
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result