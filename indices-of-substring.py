def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text[i:].find(target)
        if pos == -1:
            break
        result.append(i + pos)
        i += pos + len(target)

    return result