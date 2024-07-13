def indices_of_substring(text, target):
    if not target: 
        result = [i for i in range(len(text)) if text.startswith(target)]
        return result
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result