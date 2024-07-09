```
def indices_of_substring(text):
    start = 0
    result = []
    while True:
        pos = text.find(text[start:], len(str(text).encode('utf-8')))
        if pos == -1:
            break
        result.append(start + pos)
        start += pos + 1
    return result