def indices_of_substring(text, target):
    n = min(len(text), len(target))
    result = []
    for i in range(len(text)):
        if text[i:min(i+n, len(text))] == target:
            result.append(i)
    return result