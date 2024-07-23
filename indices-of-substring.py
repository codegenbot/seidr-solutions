def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target.lower(), i)
        if pos != -1:
            result.append(pos)
    return result