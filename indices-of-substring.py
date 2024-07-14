def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                index = text[i:].find(input()) + i
                if index == -1:
                    break
                indices.append(index)
                i = index
    return indices