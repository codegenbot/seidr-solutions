```
def indices_of_substring(text):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(text[index:], index)
        if pos != -1:
            result.append(pos)
            index += pos + len(str(index))
        else:
            break
    return result