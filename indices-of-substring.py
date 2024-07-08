```
def indices_of_substring(text, target):
"""Find all the indices at which a target string appears in a text string."""
    result = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index)
        index += len(target)