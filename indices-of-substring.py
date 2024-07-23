def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.lower().find(target.lower(), i)
        if pos != -1:
            result.append(pos)
    return result