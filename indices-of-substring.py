def indices_of_substring(text, target):
    n = len(target)
    result = []
    for i in range(len(text)):
        if text[i:i+n] == target:
            result.append(i)
    return result