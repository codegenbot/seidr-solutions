def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.find(target, i) != -1:
            result.append(i)
    return result