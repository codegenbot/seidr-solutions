def indices_of_substring(text):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(input())] == input():
            indices.append(i)
    return indices