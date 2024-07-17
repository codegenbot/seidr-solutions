def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if len(text) - i >= len(text[i:].lstrip()):
            index = text.index(text[i : i + len(text[i:].lstrip())], i)
            if i == index:
                continue
            result.append(i)
    return sorted(result)