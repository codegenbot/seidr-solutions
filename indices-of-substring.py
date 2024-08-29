```
def indices_of_substring(text):
    indices = [0]
    i = 0
    while i < len(text):
        j = text.find(text[i:], 0)
        if j == -1:
            break
        indices.append(j + i)
        i += j + 1
    return indices