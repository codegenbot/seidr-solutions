```
def indices_of_substring(text):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(text[start:], start)
        if pos == -1:
            break
        result.append(pos)
        start += pos + len(text[start:])
    return result