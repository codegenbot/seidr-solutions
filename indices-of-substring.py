def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].find(target) != -1:
            j = text[i:].index(target)
            while True:
                result.append(i + j)
                i += j + len(target)
                if text[i:].find(target) == -1:
                    break
    return result