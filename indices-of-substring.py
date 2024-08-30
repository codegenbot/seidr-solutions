def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            result.extend([i + j for j in range(len(target))])
    return result