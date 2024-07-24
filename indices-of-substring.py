def indices_of_substring(text):
    indices = []
    index = 0
    while index < len(text):
        index += text.find(text[index:], 1) + 1
        if index >= len(text):
            break
        indices.append(index)
    return indices