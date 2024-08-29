def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                try:
                    j = text[j + len(target)].index(target)
                except ValueError:
                    break
                result.append(i + j)
    return sorted(result)