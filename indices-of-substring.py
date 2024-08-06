```
def indices_of_substring(text):
    result = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(text[start_index:start_index+1], start_index)
        if pos == -1:
            break
        result.append(pos)
        start_index = pos + 1
    return result