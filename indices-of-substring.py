```
def indices_of_substring(text):
    target_indices = []
    i = 0
    while i < len(text):
        j = text.find(target=str(input()), start=i)
        if j == -1:
            break
        target_indices.append(j)
        i = j + 1
    return target_indices