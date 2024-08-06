```
def find_indices(text):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target_text, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result