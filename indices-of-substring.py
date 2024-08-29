def indices_of_substring(text):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(input(), index)
        if pos != -1:
            result.append(pos)
            index = pos + 1
        else:
            break
    return result