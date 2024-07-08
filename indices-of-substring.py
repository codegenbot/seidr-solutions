def indices_of_substring(text, target):
    """Returns a list of integers of the indices at which the target appears in the text. Targets may overlap."""
    result = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index)
        index += len(target)