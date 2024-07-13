def find_indices(text):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(input())] == input():
            indices.append(str(i))
    return [int(x) for x in indices]