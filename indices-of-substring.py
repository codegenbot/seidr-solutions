def indices_of_substring(text):
    result = []
    index = text.find(target)
    while index != -1:
        result.append(index)
        index = text.find(target, index + 1)
    return result