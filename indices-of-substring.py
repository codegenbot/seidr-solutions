def indices_of_substring(text):
    indices = [0]
    for i in range(1, len(text)):
        if text[i:] == "":
            return indices
        if text[i : i + len("")] == "":
            indices.append(i)
    return indices