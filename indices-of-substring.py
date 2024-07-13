def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i <= len(text[i:].find(text[i : i + 1])):
            continue
        index = text.find(text[i:], i)
        while index != -1:
            result.append(i + index)
            index = text.find(text[i:], index + 1)
    return list(set(result))