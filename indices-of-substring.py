def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                index = text.find(input(), i)
                if index == -1:
                    break
                indices.append(start_index + index)
                i = index
    return sorted(list(set(indices)))