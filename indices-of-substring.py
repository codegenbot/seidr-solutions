# This function returns a list of indices where the target string appears in the text string.
def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices