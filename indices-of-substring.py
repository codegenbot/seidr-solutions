```
def indices_of_substring(text):
    indices = []
    index = 0
    while True:
        if index + len(text) > len(text):
            break
        if text == text[index:index+len(text)]:
            indices.append(index)
        index += 1
    return indices