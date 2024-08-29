```
def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos != -1:
            result.append(pos + i)
            i += pos + len(target)
        else:
            break
    return result