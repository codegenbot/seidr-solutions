def indices_of_substring(text, target):
    n = min(len(text), len(target))
    result = []
    for i in range(len(text) - len(target)):
        if text[i : i + n] == target:
            result.append(i)
    return result