```
def indices_of_substring(text):
    start = 0
    result = []
    while start < len(text):
        pos = text.find(input(), start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result