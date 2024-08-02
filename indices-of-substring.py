def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            indices.append(str(i))
    return [int(x) for x in indices]