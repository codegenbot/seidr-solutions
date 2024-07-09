def indices_of_substring(text):
    indices = [0]
    i = 1
    while True:
        pos = text.find(text[indices[-1] :], i)
        if pos == -1:
            break
        indices.append(pos + len(text[: indices[-1]]))
        i = pos + 1
    return indices


text = input()
print(indices_of_substring(text))