def indices_of_substring(text):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            result.extend([j + 1 for j in range(i, len(text) - len(input()) + 1)])
    return result