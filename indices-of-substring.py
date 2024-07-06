def indices_of_substring(text, target):
    result = []
    for i in range(len(target), 2*len(target) - 1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result