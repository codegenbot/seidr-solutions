def indices_of_substring(text, target):
    n = min(len(text), len(target))
    result = []
    for i in range(n):
        if text[i:i+n] == target:
            result.append(i)
    return result