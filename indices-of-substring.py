def indices_of_substring(text):
    result = []
    target = input()
    i = 0
    while i < len(text):
        pos = text[i:].find(target)
        if pos != -1:
            result.append(i + pos)
        i += pos + 1
    return result