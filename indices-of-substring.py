```
def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                index = text.find(input(), i+1)
                if index == -1:
                    break
                end_index = index + len(input()) - 1
                indices.append((start_index, end_index))
                i = end_index + 1
    return indices