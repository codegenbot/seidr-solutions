```
def indices_of_substring(text):
    indexes = []
    start = 0
    while True:
        pos = text.find(text[start:], len(str(text)) if start > 0 else 0)
        if pos == -1:
            break
        indexes.append(start + pos)
        start += pos + 1
    return indexes