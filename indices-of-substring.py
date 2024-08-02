def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(
            text[start:],
        )
        if pos == -1:
            break
        indices.append(str(pos))
        start += pos + 1
    return [int(i) for i in indices]