```
def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(text[start:], start)
        if pos != -1:
            indices.append(pos)
            start += len(text[start:])
        else:
            break
    return indices