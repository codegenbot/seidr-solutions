```
def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos != -1:
            result.append(pos)
            i += pos + len(target)
        else:
            i += 1
    return result