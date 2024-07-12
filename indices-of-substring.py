def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i+1:].startswith(target):
            result.append(i)
    return result