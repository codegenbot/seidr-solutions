def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].find(target) != -1:
            result.append(i)
    return result