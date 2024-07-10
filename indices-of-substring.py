def indices_of_substring(text, target):
    result = []
    for index in range(len(text)):
        if text[index:index+len(target)] == target:
            result.append(index)
    return result