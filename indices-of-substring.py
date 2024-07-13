def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            start_idx = i
            while text[i:].startswith(input()):
                i += len(input())
            indices.append(start_idx)
    return sorted(indices)