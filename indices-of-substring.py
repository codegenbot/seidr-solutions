def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:min(i+len(target), len(text))] == target:
            result.append((i, i+len(target)))
    return result