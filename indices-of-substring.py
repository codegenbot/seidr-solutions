def indices_of_substring(text, target):
    result = [0]
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result