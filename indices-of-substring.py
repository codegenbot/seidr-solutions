def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = text.index(input(), i)
            indices.append(start_index)
    return indices