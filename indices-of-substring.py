def indices_of_substring(text, target):
    result = []
    last_index = 0
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
            last_index = i + len(target)
    return result