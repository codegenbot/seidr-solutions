def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text[i:].find(target)
        if pos != -1:
            result.append(i + pos)
    return result