```
def indices_of_substring(text):
    result = []
    i = 0
    while i < len(text):
        j = text.find('target', i)
        if j == -1:
            break
        result.append(j)
        i = j + 1
    return result