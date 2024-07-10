def indices_of_substring(text, target):
    result = []
    last_index = 0
    while last_index < len(text):
        pos = text.find(target, last_index)
        if pos != -1:
            result.append(pos)
            last_index = pos + 1
        else:
            break
    return result