def indices_of_substring(text, target):
    result = []
    index = 0

    while index < len(text) - len(target) + 1:
        if text[index : index + len(target)] == target:
            result.append(index)
            index += 1
        else:
            index += 1

    return result