"""
def indices_of_substring(text, target):
    indices = []
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos)
        text = text[pos + len(target):]
    return indices