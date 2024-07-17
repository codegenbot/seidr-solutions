```
def find_indices(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                start_index = text.find(input(), start_index + 1)
                if start_index == -1:
                    break
                indices.append(start_index)
    return indices