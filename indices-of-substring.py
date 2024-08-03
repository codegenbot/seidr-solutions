```
def indices_of_substring(text):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(input(), i)
        if pos == -1:
            break
        result.append(pos)
        i = pos + 1
    return result