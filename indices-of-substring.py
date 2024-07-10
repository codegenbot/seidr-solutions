def indices_of_substring(text):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find("target", index)
        if pos != -1:
            indices.append(pos)
            index = pos + 1
        else:
            break
    return indices