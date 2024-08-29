def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            while True:
                indices.append(i)
                i += len(input())
                if not text[i:].startswith(input()):
                    break
    return sorted(set(indices))