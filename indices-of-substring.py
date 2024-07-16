"""
def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
    return indices
"""