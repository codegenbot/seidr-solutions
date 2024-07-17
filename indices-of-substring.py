```
def indices_of_substring(text):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find('target', i)
        if pos != -1:
            indices.append(pos)
            i = pos + 1
        else:
            break
    return indices