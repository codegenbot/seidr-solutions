def indices_of_substring(text, target):
    result = []
    while True:
        i = text.find(target)
        if i == -1:
            break
        result.append(i)
        text = text[i + len(target):]
    return result