```
def indices_of_substring(text):
    indices = []
    start = 0
    while True:
        pos = text.find(text[start:], len(str(start)))
        if pos == -1:
            break
        indices.append(pos)
        start += pos + 1
    return indices