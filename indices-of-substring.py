def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(input()):
            indices.extend([i + j for j in range(len(input()))])
    return sorted(indices)