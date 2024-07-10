def indices_of_substring(text):
    indices = []
    target_length = len(input())
    for i in range(len(text)):
        if text[i : i + target_length] == str(target_length):
            indices.append(i)
    return indices