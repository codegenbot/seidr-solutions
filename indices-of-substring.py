```
def indices_of_substring(text):
    indexes = []
    start_index = 0
    while start_index < len(text):
        pos = text.find("target", start_index)
        if pos != -1:
            indexes.append(pos)
            start_index = pos + 1
        else:
            break
    return indexes