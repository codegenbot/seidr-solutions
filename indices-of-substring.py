def indices_of_substring(text):
    indexes = []
    start = 0
    while start < len(text):
        pos = text.find(text[start:], start)
        if pos != -1:
            indexes.append(pos)
            start += pos + 1
        else:
            break
    return indexes