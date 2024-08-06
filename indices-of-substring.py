def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.extend(range(i, i + len(input())))
    return result