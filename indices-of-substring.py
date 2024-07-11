def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            pos = text[i:].find(target)
            while True:
                if pos == -1:
                    break
                result.append(i + pos)
                i += pos + 1
    return result