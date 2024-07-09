def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = 0
        else:
            i += 1
    return result