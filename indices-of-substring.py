def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_index = i
            while True:
                if text[i:].startswith(input()):
                    end_index = i
                    indices.append(start_index)
                    i = end_index
                else:
                    break
    return indices