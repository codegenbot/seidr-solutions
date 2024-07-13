def indices_of_substring(text):
    target_indices = []
    for i in range(len(text)):
        if text[i : i + len(input())] == input():
            target_indices.append(str(i))
    return [int(x) for x in target_indices]