def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        j = text.find(target)
        if j != -1:
            result.append(i + j)
            i += j + 1
        else:
            break
    return result