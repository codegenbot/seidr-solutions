def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                start = text.find(input(), i)
                if start == -1:
                    break
                indices.append(start)
                i = start + 1
    return sorted(set(indices))