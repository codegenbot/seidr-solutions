def indices_of_substring(text):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(text[i:], i)
        if pos != -1:
            indices.append(str(pos))
            i += pos + 1
        else:
            break
    return [int(i) for i in indices]