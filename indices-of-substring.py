def indices_of_substring(text, target):
    result = []
    for i in range(len(text)-len(target)+1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result