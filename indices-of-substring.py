def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                pos = text[i:].find(target)
                if pos == -1:
                    break
                result.append(i + pos - len(target) + 1)
                i += pos + 1
    return result