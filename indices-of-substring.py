```
def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos != -1:
            result.append(pos)
            index += pos + len(target)
        else:
            break
    return result