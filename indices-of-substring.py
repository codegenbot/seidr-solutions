def indices_of_substring(text):
    target = input()
    result = []
    for i in range(len(text)):
        pos = text[i : i + len(target)].find(target)
        if pos != -1:
            result.append(i + pos)
    return result