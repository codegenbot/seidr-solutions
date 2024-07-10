```
def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                index = text.find(input(), start_index)
                if index == -1:
                    break
                indices.append(index)
                start_index = index + 1
    return indices