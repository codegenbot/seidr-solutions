def indices_of_substring(text, target):
    result = []
    for i in range(len(target)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result