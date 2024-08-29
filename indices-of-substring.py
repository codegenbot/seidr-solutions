def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target):
            result.append(i)
        elif text[i:].startswith(target):
            result.append(i)
    return result