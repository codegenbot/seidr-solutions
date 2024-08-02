def indices_of_substring(text):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(input(), index)
        if pos == -1:
            break
        indices.append(pos)
        index = pos + 1
    return indices