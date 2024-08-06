```
def indices_of_substring(text):
    target_indices = []
    start = 0
    while start < len(text):
        pos = text.find(input(), start)
        if pos == -1:
            break
        target_indices.append(pos)
        start = pos + 1
    return target_indices