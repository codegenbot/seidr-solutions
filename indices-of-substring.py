def indices_of_substring(text, target):
    result = [0]
    i = 1
    while i <= len(text) - len(target):
        i += 1
        if text[i - 1 : i + len(target) - 1] == target:
            result.append(i - 1)
    return result