def indices_of_substring(text, target):
    result = []
    for i, char in enumerate(text):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result